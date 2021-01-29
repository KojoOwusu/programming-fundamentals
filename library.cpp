#include <iostream>

int global = 5;

namespace
{
    int local = 10;
    void doSomething()
    {
        std::cout << "do someting already!";
    }
} // namespace
