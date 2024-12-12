#include <iostream>

// Define a new unscoped enumeration named Color
enum Color // unscoped enumeration
{
    // Here are the enumerators
    // These symbolic constants define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    red,
    green,
    blue, // trailing comma optional but recommended
}; // the enum definition must end with a semicolon

enum class Color2
{
    black, // assigned 0
    red, // assigned 1
    blue, // assigned 2
    green, // assigned 3
    white, // assigned 4
    cyan, // assigned 5
    yellow, // assigned 6
    magenta, // assigned 7
};

int main()
{
    // Define a few variables of enumerated type Color
    Color apple { Color::red };   // my apple is red
    Color shirt { Color::green }; // my shirt is green
    Color cup { Color::blue };    // my cup is blue

    std::cout << "Your shirt is Color-" << shirt << '\n'; // what does this do?

    //Color socks { white }; // error: white is not an enumerator of Color
    //Color hat { 2 };       // error: 2 is not an enumerator of Color

    Color2 shirt2 { Color2::blue };

    std::cout << "Your shirt is Color2-" << static_cast<int>(shirt2) << '\n'; // what does this do?

    return 0;
}