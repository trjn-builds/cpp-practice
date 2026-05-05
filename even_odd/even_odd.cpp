#include <iostream>
#include <limits>

constexpr bool isEven(int x)
{
    return (x % 2 == 0);
}

int main()
{
    while (true) {
        std::cout << "Enter an integer: ";
        int x{};

        if (!(std::cin >> x) || std::cin.peek() != '\n'){
            //Reset error flags
            std::cin.clear(); 

            //Clear everything in input buffer until newline
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Invalid input. Enter an integer.\n";

            //Skips rest of the loop and restarts
            continue; 

        }

        if (isEven(x)){
            std::cout << x << " is even\n";
        }
        else{
            std::cout << x << " is odd\n";
        }
    }
    return 0;
}