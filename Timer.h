//
// Created by Haibin Cao on 11/15/22.
//

#ifndef FIBONACCI_TIMER_H
#define FIBONACCI_TIMER_H
#include <chrono>

class Timer {
private:
    typedef std::chrono::high_resolution_clock Clock;
    typedef Clock::time_point Time;
    Time getCurrentTime();
    Time t1, t2;
public:
    void start();
    void end();
    double getDuration();
};
#endif //FIBONACCI_TIMER_H
