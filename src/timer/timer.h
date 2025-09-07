#ifndef TIMER_01 
#define TIMER_01

typedef enum typeTimers{
    POM,
    TIM,
    UNDEFINED,
}typeTimers;

typedef struct pomodoro {
    int timer;
    int pause;
    int repetition;
}pomodoro;

typedef struct timer {
    int timer;
}timer;

union timerType {
    timer timer;
    pomodoro pomodoro;
};

typedef struct timerSetting {
    typeTimers typeTimer;
    union timerType value; 
}timerSetting;

void CreateTimer(int time);
void CreatePomodoro(int time, int puase, int repetition); 

#endif
