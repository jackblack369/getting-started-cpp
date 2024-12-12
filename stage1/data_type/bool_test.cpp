#include <iostream>

void integer2bool()
{
    std::cout << "iteger2book function print...\n";
    bool bFalse { 0 }; // okay: initialized to false
	bool bTrue  { 1 }; // okay: initialized to true
	// bool bNo    { 2 }; // error: narrowing conversions disallowed

	std::cout << bFalse << bTrue << '\n';
}

void printBool()
{
    std::cout << "printBook function print...\n";
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << '\n';
    std::cout << false << '\n';
}


int main()
{
    integer2bool();
    printBool();

    return 0;
}
