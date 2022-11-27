//
// Created by Haibin Cao on 11/15/22.
//

#include "fibonacci.h"

void iterativeFibonacci(int amountOfTimes)
{
    long t = 1, t2 = 0, temp = 0, counter = 0;
    while(counter != amountOfTimes)
    {
        temp = t2;
        t2 = t2+t;
        t = temp;
        counter++;
    }
    std::cout << t2 << std::endl;
}

void recursiveFibonacci(int amountOfTimes, long firstTerm, long temp)
{
    if(amountOfTimes == 0)
    {
        std::cout << temp << std::endl;
    }
    else
    {
        recursiveFibonacci(amountOfTimes-1, temp, temp + firstTerm);
    }
}