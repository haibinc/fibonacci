#include <iostream>
#include "fibonacci.h"
#include "Timer.h"

int main() {
    Timer t;
    t.start();
    iterativeFibonacci(100);
    t.end();
    std::cout << "It took " << t.getDuration() << " seconds to run the fibonacci iteratively: " << std::endl;
    t.start();
    recursiveFibonacci(100, 1, 0);
    t.end();
    std::cout << "It took " << t.getDuration() << " seconds to run the fibonacci recursively: " << std::endl;
    return 0;
}
