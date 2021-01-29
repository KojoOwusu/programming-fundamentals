#include <iostream>

int main()
{
    enum
    {
        RED,
        YELLOW,
        AMBER = YELLOW,
        GREEN
    };

    std::cout << RED << std::endl;
    std::cout << YELLOW << std::endl;
    std::cout << AMBER << std::endl;
    std::cout << GREEN << std::endl;
}