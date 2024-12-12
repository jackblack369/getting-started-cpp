#include <cstdint>  // for std::int8_t
#include <iostream>

// Use an 8-bit integer as the enum underlying type
enum Color : std::int8_t
{
    black,
    red,
    blue,
};

enum Pet: int // we've specified a base
{
    cat, // assigned 0
    dog, // assigned 1
    pig, // assigned 2
    whale, // assigned 3
};

int main()
{
    Color c{ black };
    std::cout << sizeof(c) << '\n'; // prints 1 (byte)

    Pet pet1 { 2 }; // ok: can brace initialize unscoped enumeration with specified base with integer (C++17)
    // Pet pet2 (2);   // compile error: cannot direct initialize with integer
    // Pet pet3 = 2;   // compile error: cannot copy initialize with integer
    // pet1 = 3;       // compile error: cannot assign with integer

    return 0;
}