#include <iostream>

#define FOO 9 // Here's a macro substitution

int main()
{
#ifdef FOO // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
    std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
#endif
}