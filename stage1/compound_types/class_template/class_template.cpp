#include <iostream>

// a single function template for max
template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

template <typename T>
struct Pair
{
    T first{};
    T second{};
};

template <typename T>
constexpr T max(Pair<T> p)
{
    return (p.first < p.second ? p.second : p.first);
}

template <typename T, typename U>
struct Pair2
{
    T first{};
    U second{};
};

template <typename T, typename U>
void print(Pair2<T, U> p)
{
    std::cout << '[' << p.first << ", " << p.second << ']';
}

template <typename T, typename U>
void print(std::pair<T, U> p)
{
    std::cout << '[' << p.first << ", " << p.second << ']';
}


int main()
{
    std::cout << max(5, 6);     // instantiates and calls max<int>(int, int)
    std::cout << '\n';
    std::cout << max(1.2, 3.4); // instantiates and calls max<double>(double, double)

    Pair<int> p1{ 5, 6 };        // instantiates Pair<int> and creates object p1
    std::cout << p1.first << ' ' << p1.second << '\n';

    Pair<double> p2{ 1.2, 3.4 }; // instantiates Pair<double> and creates object p2
    std::cout << p2.first << ' ' << p2.second << '\n';

    Pair<double> p3{ 7.8, 9.0 }; // creates object p3 using prior definition for Pair<double>
    std::cout << p3.first << ' ' << p3.second << '\n';

    std::cout << max<int>(p1) << " is larger\n"; // explicit call to max<int>
    std::cout << max(p2) << " is larger\n"; // call to max<double> using template argument deduction (prefer this)

    Pair2<int, double> p4{ 1, 2.3 }; // a pair holding an int and a double
    Pair2<double, int> p5{ 4.5, 6 }; // a pair holding a double and an int
    Pair2<int, int> p6{ 7, 8 };      // a pair holding two ints

    print(p4);

    std::pair<int, double> p7{ 1, 2.3 }; // a pair holding an int and a double
    std::pair<double, int> p8{ 4.5, 6 }; // a pair holding a double and an int
    std::pair<int, int> p9{ 7, 8 };      // a pair holding two ints

    print(p7);

    return 0;
}