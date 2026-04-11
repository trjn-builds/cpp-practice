#include <iostream>
#include <cstdio>
int main() {
    long version = __cplusplus;

    std::cout << "__cplusplus = " << version << "\n";

    if (version >= 202302)
        std::cout << "C++23 or newer\n";
    else if (version >= 202002)
        std::cout << "C++20\n";
    else if (version >= 201703)
        std::cout << "C++17\n";
    else if (version >= 201402)
        std::cout << "C++14\n";
    else if (version >= 201103)
        std::cout << "C++11\n";
    else
        std::cout << "Pre-C++11\n";

    std::cout << "NEW BUILD\n";
}