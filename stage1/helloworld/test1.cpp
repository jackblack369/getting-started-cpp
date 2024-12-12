#include <iostream>

int main()
{
    // The [[maybe_unused]] attribute suppresses warnings about unused variables, and it's c++ 17 feature
    // so, should compile with c++17 or higher standard by "g++ test1.cpp -std=gnu++17"
    [[maybe_unused]] double pi { 3.14159 }; // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}