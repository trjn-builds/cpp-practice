#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace boost::multiprecision;
using big_float = number<cpp_dec_float<10000>>;

int main()
{
    std::cout << std::setprecision(10000);

    std::cout << "Overly Precise Calculator\n";

    std::cout << "=====================INSTRUCTIONS=====================\nEnter an expression (number operator number)\nFor example: 50 * 20\nValid operators: + , - , * , / , q (to quit)\n=====================INSTRUCTIONS=====================\n\n";

    big_float num1{};
    char oper{};
    big_float num2{};
    bool running {true};

    while (running)
    {
        std::cout << "Enter an expression: ";
        if (!(std::cin >> num1 >> oper >> num2))
        {
            std::cout << "Invalid statement, try again.\n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (oper == '+') {
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        }
        else if (oper == '-') {
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
        }
        else if (oper == '*' || oper == 'x') {
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
        }
        else if (oper == '/') {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
        }
        else if (oper == 'q') {
            running = false;
        }
        else {
            std::cout << "Invalid statement, try again.\n";
        }
    }
    
    return 0;
}