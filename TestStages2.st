PROGRAM ControlStages
VAR
    SP_TEsup : REAL := 20.0; // Уставка температуры
    dT: REAL := 3.0;         // Допустимое отклонение
    rTEsup : REAL;           // Текущая температура
    xStage : ARRAY[1..12] OF BOOL; // Ступени ТЭНа (пример для 12 ступеней)
    TON : TON;               // Таймер на включение
    TOF : TOF;               // Таймер на отключение
END_VAR

// Если температура в норме, работает только первая ступень
IF (rTEsup >= SP_TEsup - dT) AND (rTEsup <= SP_TEsup + dT) THEN
    xStage[1] := TRUE;
    FOR i := 2 TO 12 DO
        xStage[i] := FALSE;
    END_FOR;
END_IF

// Если температура слишком низкая, включаем ступени по таймеру
IF rTEsup < SP_TEsup - dT THEN
    TON(IN := TRUE, PT := T#5M);
    IF TON.Q THEN
        FOR i := 2 TO 12 DO
            IF NOT xStage[i] THEN
                xStage[i] := TRUE;
                EXIT; // Включаем одну ступень за раз
            END_IF;
        END_FOR;
        TON(IN := FALSE); // Сброс таймера после включения
    END_IF;
END_IF

// Если температура слишком высокая, отключаем ступени по таймеру
IF rTEsup > SP_TEsup + dT THEN
    TOF(IN := TRUE, PT := T#1M);
ELSE
    TOF(IN := FALSE); // Сброс таймера, если температура не превышает предел
END_IF;

IF NOT TOF.Q THEN
    FOR i := 12 DOWNTO 2 DO
        IF xStage[i] THEN
            xStage[i] := FALSE;
            EXIT; // Отключаем одну ступень за раз
        END_IF;
    END_FOR;
END_IF

// Аварийная ситуация: перегрев
IF rTEsup > 60.0 THEN
    FOR i := 1 TO 12 DO
        xStage[i] := FALSE;
    END_FOR;
    // Можно добавить сигнализацию или другие действия
END_IF