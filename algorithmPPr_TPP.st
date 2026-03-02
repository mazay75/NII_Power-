FUNCTION_BLOCK FB_RotationAndControl_SupCCB
VAR
    State: INT;  // Текущее состояние автомата: 
                 // 0-инициализация, 1-отключена, 2-нормальная работа, 3-авария
END_VAR

VAR_INPUT
    // === КОМАНДЫ УПРАВЛЕНИЯ ===
    xWork: BOOL;                    // Главная команда работы системы: 1-вкл, 0-выкл
    xSeason: BOOL;                  // Сезонный режим: 1-лето, 0-зима
    xSWFanChoice: BOOL;             // Выбор приточки установки: 0-1я приточка, 1-2я приточка
    
    // === ТЕМПЕРАТУРНЫЕ ДАТЧИКИ И УСТАВКИ ===
    rTEroom1: REAL;                 // Температура помещения 1
    rTEroom2: REAL;                 // Температура помещения 2
    SP_TEroomMax: REAL;             // Верхняя уставка температуры (включение доп. приточки)
    SP_TEroomMin: REAL;             // Нижняя уставка температуры (выключение доп. приточки)
    
    // === АВАРИЙНЫЕ СИГНАЛЫ ===
    // Аварии заслонок ПРИТОЧКИ 1
    xAlarmDamp1_Sup1: BOOL;         // Авария ЛЕТНЕЙ заслонки 1й приточки
    xAlarmDamp2_Sup1: BOOL;         // Авария ЗИМНЕЙ заслонки 1й приточки
    // Аварии заслонок ПРИТОЧКИ 2  
    xAlarmDamp1_Sup2: BOOL;         // Авария ЛЕТНЕЙ заслонки 2й приточки
    xAlarmDamp2_Sup2: BOOL;         // Авария ЗИМНЕЙ заслонки 2й приточки
    
    xAlarmFan1: BOOL;               // Авария вентилятора 1й приточки
    xAlarmFan2: BOOL;               // Авария вентилятора 2й приточки
    xAlarmCCB1: BOOL;               // Авария ККБ1 (чиллера)
    xAlarmCCB2: BOOL;               // Авария ККБ2 (чиллера)
    xAlarmTEroom1: BOOL;            // Авария датчика температуры помещения 1
    xAlarmTEroom2: BOOL;            // Авария датчика температуры помещения 2
    
    // === СИГНАЛЫ ОБРАТНОЙ СВЯЗИ ===
    xStatusDamp1_Sup1: BOOL;        // Статус открытия летней заслонки 1й приточки
    xStatusDamp2_Sup1: BOOL;        // Статус открытия зимней заслонки 1й приточки
    xStatusDamp1_Sup2: BOOL;        // Статус открытия летней заслонки 2й приточки
    xStatusDamp2_Sup2: BOOL;        // Статус открытия зимней заслонки 2й приточки
    xStatusFan1: BOOL;              // Статус работы вентилятора 1
    xStatusFan2: BOOL;              // Статус работы вентилятора 2
    xStatusCCB1: BOOL;              // Статус работы ККБ1
    xStatusCCB2: BOOL;              // Статус работы ККБ2
END_VAR

VAR_OUTPUT
    // === КОМАНДЫ УПРАВЛЕНИЯ ЗАСЛОНКАМИ ===
    xDamp1_Sup1: BOOL;              // Команда на открытие летней заслонки 1й приточки
    xDamp2_Sup1: BOOL;              // Команда на открытие зимней заслонки 1й приточки
    xDamp1_Sup2: BOOL;              // Команда на открытие летней заслонки 2й приточки  
    xDamp2_Sup2: BOOL;              // Команда на открытие зимней заслонки 2й приточки
    
    // === КОМАНДЫ УПРАВЛЕНИЯ ВЕНТИЛЯТОРАМИ ===
    xFan1: BOOL;                    // Команда включения вентилятора 1
    xFan2: BOOL;                    // Команда включения вентилятора 2
    
    // === КОМАНДЫ УПРАВЛЕНИЯ ККБ ===
    xCCB1: BOOL;                    // Команда включения ККБ1
    xCCB2: BOOL;                    // Команда включения ККБ2
    
    STATE: INT;                     // Текущее состояние для визуализации
END_VAR



// ──────────────────────────────────────────────────────────────────────────────
// УСЛОВИЯ ПЕРЕХОДА МЕЖДУ СОСТОЯНИЯМИ
// ──────────────────────────────────────────────────────────────────────────────

// ВХОД В СОСТОЯНИЕ 1: "ОТКЛЮЧЕНА"
IF xWork = 0 THEN 
    State := 1;  // Команда ОСТАНОВ от оператора
END_IF;

// ВХОД В СОСТОЯНИЕ 2: "НОРМАЛЬНАЯ РАБОТА"  
IF xWork = 1 THEN 
    State := 2;  // Команда ПУСК от оператора
END_IF;

// ВХОД В СОСТОЯНИЕ 3: "АВАРИЙНЫЙ РЕЖИМ"
IF xWork = 1 AND 
   (((xSeason = 1 AND xAlarmDamp1_Sup1) OR (xSeason = 0 AND xAlarmDamp2_Sup1)) OR 
    ((xSeason = 1 AND xAlarmDamp1_Sup2) OR (xSeason = 0 AND xAlarmDamp2_Sup2)) OR 
    (xAlarmFan1 OR xAlarmFan2) OR 
    (xAlarmCCB1 OR xAlarmCCB2) OR
    (xAlarmTEroom1 OR xAlarmTEroom2)) THEN 
    State := 3;  // Обнаружены аварии оборудования или датчиков
END_IF;


CASE State OF
    
    0://ИНИЦИАЛИЗАЦИЯ
        // СБРОС ВСЕХ ВЫХОДНЫХ КОМАНД
        xDamp1_Sup1 := 0;  // Закрыть летнюю заслонку 1й приточки
        xDamp2_Sup1 := 0;  // Закрыть зимнюю заслонку 1й приточки
        xDamp1_Sup2 := 0;  // Закрыть летнюю заслонку 2й приточки
        xDamp2_Sup2 := 0;  // Закрыть зимнюю заслонку 2й приточки
        xFan1 := 0;        // Остановить вентилятор 1
        xFan2 := 0;        // Остановить вентилятор 2
        xCCB1 := 0;        // Выключить ККБ1
        xCCB2 := 0;        // Выключить ККБ2

    
    1:// ОТЛЮЧИТЬ ВСЁ
        IF xStatusFan1 = 0 AND xStatusCCB1 = 0 THEN 
            xDamp1_Sup1 := 0;  // Закрыть летнюю заслонку 1й приточки
            xDamp2_Sup1 := 0;  // Закрыть зимнюю заслонку 1й приточки
        END_IF;
        IF xStatusFan2 = 0 AND xStatusCCB2 = 0 THEN 
            xDamp1_Sup2 := 0;  // Закрыть летнюю заслонку 2й приточки
            xDamp2_Sup2 := 0;  // Закрыть зимнюю заслонку 2й приточки
        END_IF;
        
        xFan1 := 0;    // Остановить вентилятор 1
        xFan2 := 0;    // Остановить вентилятор 2
        xCCB1 := 0;    // Выключить ККБ1
        xCCB2 := 0;    // Выключить ККБ2

    
    2: // НОРМАЛЬНАЯ РАБОТА
        // ВНЕШНИЙ CASE - выбор по сезону
        CASE xSeason OF
            1:  // ЛЕТНИЙ РЕЖИМ - управление с доп. приточкой
            
                CASE xSWFanChoice OF
                    0:  // ВЫБРАНА ПРИТОЧКА 1
                        xDamp1_Sup1 := 1;
                        xDamp2_Sup1 := 0; 
                        xFan1 := xStatusDamp1_Sup1;  
                        xCCB1 := xFan1 AND NOT xAlarmCCB1;
                        
                        // заменено: CASE TRUE OF -> IF/ELSIF
                        IF rTEroom2 >= SP_TEroomMax THEN
                            // включаем приточку 2, если сильно жарко
                            xDamp1_Sup2 := 1;
                            xDamp2_Sup2 := 0;  
                            xFan2 := xStatusDamp1_Sup2;
                            xCCB2 := xFan2 AND NOT xAlarmCCB2;  
                        ELSIF rTEroom2 <= SP_TEroomMin THEN
                            // выключаем приточку 2, если остудили
                            IF xStatusFan2 = 0 AND xStatusCCB2 = 0 THEN 
                                xDamp1_Sup2 := 0; 
                            END_IF;
                            xDamp2_Sup2 := 0; 
                            xFan2 := 0; 
                            xCCB2 := 0;   
                        END_IF;
                    
                    1:  // ВЫБРАНА ПРИТОЧКА 2
                        xDamp1_Sup2 := 1; 
                        xDamp2_Sup2 := 0;
                        xFan2 := xStatusDamp1_Sup2;  
                        xCCB2 := xFan2 AND NOT xAlarmCCB2;
                        
                        // заменено: CASE TRUE OF -> IF/ELSIF
                        IF rTEroom1 >= SP_TEroomMax THEN
                            // включаем приточку 1, если сильно жарко
                            xDamp1_Sup1 := 1;   
                            xDamp2_Sup1 := 0;  
                            xFan1 := xStatusDamp1_Sup1;  
                            xCCB1 := xFan1 AND NOT xAlarmCCB1;
                        ELSIF rTEroom1 <= SP_TEroomMin THEN
                            // выключаем приточку 1, если остудили
                            IF xStatusFan1 = 0 AND xStatusCCB1 = 0 THEN 
                                xDamp1_Sup1 := 0; 
                            END_IF;
                            xDamp2_Sup1 := 0;  
                            xFan1 := 0;        
                            xCCB1 := 0;
                        END_IF;
                END_CASE;
                
            0:  // ЗИМНИЙ РЕЖИМ - управление без доп. приточки

                CASE xSWFanChoice OF
                    0:  // Выбрана ПРИТОЧКА 1
                        xDamp1_Sup1 := 0;  
                        xDamp2_Sup1 := 1;  // Открыть зимнюю заслонку 1й приточки
                        xFan1 := xStatusDamp2_Sup1; 
                        xCCB1 := 0;
                        xDamp1_Sup2 := 0;  
                        xDamp2_Sup2 := 0;   
                        xFan2 := 0;  
                        xCCB2 := 0;                
                        
                    1: // Выбрана ПРИТОЧКА 2
                        xDamp1_Sup2 := 0;  
                        xDamp2_Sup2 := 1;  // Открыть зимнюю заслонку 2й приточки
                        xFan2 := xStatusDamp2_Sup2; 
                        xCCB2 := 0;
                        xDamp1_Sup1 := 0;  
                        xDamp2_Sup1 := 0;   
                        xFan1 := 0;  
                        xCCB1 := 0;  
                END_CASE;
        END_CASE;

    3: // СОСТОЯНИЕ 3: АВАРИЙНЫЙ РЕЖИМ (РОТАЦИЯ)
       
        // заменено: CASE TRUE OF -> IF/ELSIF/ELSE
        IF ((xSeason = 1 AND xAlarmDamp1_Sup1) OR (xSeason = 0 AND xAlarmDamp2_Sup1) OR 
            xAlarmFan1 OR xAlarmCCB1 OR xAlarmTEroom1) THEN
            // АВАРИЯ ПРИТОЧКИ 1
            xFan1 := 0;    
            xCCB1 := 0;    
            IF xStatusFan1 = 0 AND xStatusCCB1 = 0 THEN
                xDamp1_Sup1 := 0;  
                xDamp2_Sup1 := 0;  
            END_IF;
            
            // ЗАПУСК РЕЗЕРВНОЙ ПРИТОЧКИ 2
            CASE xSeason OF
                1: 
                    xDamp1_Sup2 := 1;              // Открыть летнюю заслонку 2й приточки
                    xDamp2_Sup2 := 0;              
                    xFan2 := xStatusDamp1_Sup2; 
                    xCCB2 := xFan2 AND NOT xAlarmCCB2;  
                    
                0:  
                    xDamp1_Sup2 := 0;              
                    xDamp2_Sup2 := 1;              // Открыть зимнюю заслонку 2й приточки
                    xFan2 := xStatusDamp2_Sup2;    
                    xCCB2 := 0;  
            END_CASE;
            
        ELSIF ((xSeason = 1 AND xAlarmDamp1_Sup2) OR (xSeason = 0 AND xAlarmDamp2_Sup2) OR 
               xAlarmFan2 OR xAlarmCCB2 OR xAlarmTEroom2) THEN
            // АВАРИЯ ПРИТОЧКИ 2
            xFan2 := 0;    
            xCCB2 := 0;    
            IF xStatusFan2 = 0 AND xStatusCCB2 = 0 THEN
                xDamp1_Sup2 := 0;  
                xDamp2_Sup2 := 0;  
            END_IF;
            
            // ЗАПУСК РЕЗЕРВНОЙ ПРИТОЧКИ 1
            CASE xSeason OF
                1:  // ЛЕТО 
                    xDamp1_Sup1 := 1;              // Открыть летнюю заслонку 1й приточки
                    xDamp2_Sup1 := 0;              
                    xFan1 := xStatusDamp1_Sup1;  
                    xCCB1 := xFan1 AND NOT xAlarmCCB1;  
                    
                0:  // ЗИМА
                    xDamp1_Sup1 := 0;              
                    xDamp2_Sup1 := 1;              // Открыть зимнюю заслонку 1й приточки
                    xFan1 := xStatusDamp2_Sup1;  
                    xCCB1 := 0;  
            END_CASE;
            
        ELSE
            xDamp1_Sup1 := 0;  
            xDamp2_Sup1 := 0; 
            xDamp1_Sup2 := 0;  
            xDamp2_Sup2 := 0;
            xFan1 := 0;  
            xFan2 := 0;  
            xCCB1 := 0;  
            xCCB2 := 0;  
        END_IF;

END_CASE;

STATE := State;

END_FUNCTION_BLOCK