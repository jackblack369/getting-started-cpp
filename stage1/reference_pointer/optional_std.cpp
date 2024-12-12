#include <iostream>
#include <optional> // for std::optional (C++17)

// Our function now optionally returns an int value
std::optional<int> doIntDivision(int x, int y)
{
    if (y == 0)
        return {}; // or return std::nullopt
    return x / y;
}

int main()
{
    std::optional<int> result1 { doIntDivision(20, 5) };
    if (result1) // if the function returned a value
    {
        std::cout << "Result 1: " << *result1 << '\n'; // dereference to get value stored
        std::cout << "Result1 value(): " << result1.value() << '\n';      // call value() to get value stored in o2 (throws std::bad_optional_access exception if o2 does not have a value)
        std::cout << "Result1 value_or(42): " << result1.value_or(42) << '\n'; // call value_or() to get value stored in o3 (or value `42` if o3 doesn't have a value)
    }
    else
        std::cout << "Result 1: failed\n";

    std::optional<int> result2 { doIntDivision(5, 0) };

    if (result2)
        std::cout << "Result 2: " << *result2 << '\n';
    else
        std::cout << "Result 2: failed\n";

    return 0;
}