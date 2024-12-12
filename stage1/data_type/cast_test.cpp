#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

void print(double x)
{
    std::cout << x << '\n';
}


void int8EqualChar()
{
    std::cout << "Enter a number between 0 and 127: ";
    std::int8_t myInt{};
    std::cin >> myInt;

    std::cout << "You entered: " << static_cast<int>(myInt) << '\n';
}

int main()
{
	//print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int
    int8EqualChar();

	return 0;
}