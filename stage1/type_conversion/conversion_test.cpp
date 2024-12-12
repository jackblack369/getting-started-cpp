#include <iostream>
#include <typeinfo> // for typeid()


void static_cast_test()
{
    int x { 10 };
    int y { 4 };

    // static cast x to a double so we get floating point division
    double d { static_cast<double>(x) / y };
    std::cout << d << '\n'; // prints 2.5
}

void type_id()
{
    int i{ 2 };
    std::cout << typeid(i).name() << '\n'; // show us the name of the type for i

    double d{ 3.5 };
    std::cout << typeid(d).name() << '\n'; // show us the name of the type for d

    std::cout << typeid(i + d).name() << ' ' << i + d << '\n'; // show us the type of i + d
}

void type_alias()
{
    using Distance = double; // define Distance as an alias for type double

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value

} 

int main()
{
    type_alias();

    return 0;
}