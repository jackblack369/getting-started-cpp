#include <iostream>

void test1()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x >= 0) // outer if statement
    {
        // it is bad coding style to nest if statements this way
        if (x <= 20) // inner if statement
            std::cout << x << " is between 0 and 20\n";
    }
    else
        std::cout << x << " is negative\n";

}

void test_flattening_nest()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x < 0)
        std::cout << x << " is negative\n";
    else if (x <= 20) // only executes if x >= 0
        std::cout << x << " is between 0 and 20\n";
    else // only executes if x > 20
        std::cout << x << " is greater than 20\n";
}

void constrexpr_test()
{
    constexpr double gravity{ 9.8 };

	if constexpr (gravity == 9.8) // now using constexpr if
		std::cout << "Gravity is normal.\n";
	else
		std::cout << "We are not on Earth.\n";
}

int main()
{
    //test1();
    //test_flattening_nest();
    constrexpr_test();

    return 0;
}