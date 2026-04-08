#include "operators.h"
#include "get_integer.h"
#include <iostream>
#include <cstdio>


int main()
{
    //Input 2 integers from user and store them in x and y
    int x{getInteger()};
    int y{getInteger()};

    std::cout << "=========================================================\n";

    //Calculations
    std::cout << x << " + " << y << " is " << add(x,y) << "\n";
    std::cout << x << " - " << y << " is " << subtract(x,y) << "\n";
    std::cout << x << " * " << y << " is " << multiply(x,y) << "\n";
    std::cout << x << " / " << y << " is " << divide(x,y) << "\n";

    std::cout << "=========================================================\n";

    //Stops terminal from closing instantly
    std::cout << "Enter any key to exit...\n";
    std::getchar();
    char character{};
    std::cin >> character;

    return 0;
}