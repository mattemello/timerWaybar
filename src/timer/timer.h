#ifndef TIMER_01 
#define TIMER_01

typedef enum typeTimers{
    POM,
    TIM,
}typeTimers;

typedef struct timer {
    int timeWait;
    typeTimers typeTimer;
}timer;

void CreateTimer(int time, typeTimers tp);

#endif
