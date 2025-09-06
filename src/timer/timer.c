#include <stdio.h>
#include <stdlib.h>
#include "timer.h"

timer valueTimer;

void CreateTimer(int time, typeTimers tp) {
    valueTimer.timeWait = time;
    valueTimer.typeTimer = tp;

    printf("%d \n%d\n", valueTimer.timeWait, valueTimer.typeTimer);
}
