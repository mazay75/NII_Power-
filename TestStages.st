PROGRAM TemperatureControl
VAR
    SP_TEsup : REAL := 20.0; (* Уставка температуры *)
    dT: REAL := 3.0; (* Допустимое отклонение температуры *)
    rTEsup : REAL; (* Текущая температура *)
    xStage : ARRAY[1..12] OF BOOL; (* Состояние ступеней ТЭНа *)
    NumbOfStates : INT := 3; (* Количество ступеней, задается пользователем *)
    CurrStage : INT := 1; (* Текущая включенная ступень *)
    TON1 : TON; (* Таймер для задержки включения следующей ступени *)
    TOF2 : TOF; (* Таймер для отключения ступеней *)
    SP_TimeOnNextStage : TIME := T#5M; (* Время задержки для включения следующей ступени *)
END_VAR

(* Основной алгоритм управления температурой *)
IF (rTEsup >= SP_TEsup - dT) AND (rTEsup <= SP_TEsup + dT) THEN
    (* Область 1 и 4: работает только первая ступень *)
    xStage[1] := TRUE; (* ПИД-регулятор *)
    FOR i := 2 TO NumbOfStates DO
        xStage[i] := FALSE;
    END_FOR;
ELSIF rTEsup < SP_TEsup - dT THEN
    (* Область 2: включение дополнительных ступеней по таймеру *)
    IF NOT xStage[2] THEN
        xStage[2] := TRUE;
        TON1(IN:=TRUE, PT:=SP_TimeOnNextStage);
    END_IF;
    IF TON1.Q AND (CurrStage < NumbOfStates) THEN
        CurrStage := CurrStage + 1;
        xStage[CurrStage] := TRUE;
        TON1(IN:=FALSE);
    END_IF;
ELSIF rTEsup > SP_TEsup + dT THEN
    (* Область 3: отключение ступеней по таймеру, кроме первой *)
    TOF2(IN:=TRUE, PT:=T#1M); // TOF вместо TON
    IF NOT TOF2.Q THEN // Q станет FALSE через 1 минуту
        FOR i := NumbOfStates DOWNTO 2 DO
            IF xStage[i] THEN
                xStage[i] := FALSE;
                EXIT;
            END_IF;
        END_FOR;
    END_IF;
ELSE
    TOF2(IN:=FALSE); // сброс таймера, если температура не превышает предел
END_IF;

(* Обработка аварийных ситуаций *)
IF rTEsup > 60.0 THEN
    (* Аварийная ситуация: перегрев *)
    FOR i := 1 TO NumbOfStates DO
        xStage[i] := FALSE;
    END_FOR;
    CurrStage := 1;
    (* Дополнительные действия по защите от перегрева *)
END_IF;
