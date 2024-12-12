#include <iostream>

void test1()
{
    // oops, we used operator< instead of operator<=
    for (int i{ 1 }; i < 5; ++i)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

}

void omitted_for()
{
    int i{ 1 };
    for (; i < 5; ++i)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';
}

void multiple()
{
    for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y)
        std::cout << x << ' ' << y << '\n';
}

int main()
{
    test1();

    return 0;
}