#include <stdio.h>
#include <stdlib.h>
#include "timer.h"

timerSetting valueTimer = {UNDEFINED};

void CreateTimer(int time) {
    if(valueTimer.typeTimer != UNDEFINED) {
        printf("ERROR - you are in the wrong time function\n"); 
        exit(1);
    }

    valueTimer.typeTimer = TIM;

    timer tim;
    tim.timer = time;

    valueTimer.value.timer = tim;

    printf("%d\n", valueTimer.value); 

}

void CreatePomodoro(int time, int pause, int repetition) {
    if(valueTimer.typeTimer != UNDEFINED) {
        printf("ERROR - you are in the wrong time function\n"); 
        exit(1);
    }
   valueTimer.typeTimer = POM;

    pomodoro pom = {time, pause, repetition};
    
    valueTimer.value.pomodoro = pom;
    printf("%d\n", valueTimer.value.pomodoro.pause); 
}
