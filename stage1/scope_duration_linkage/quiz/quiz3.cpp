#include <iostream>

int accumulate(int x)
{
    static int sum{ 0 }; // static duration via static keyword.  This initializer is only executed once.
    sum += x;
    return sum;
} // sum is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}