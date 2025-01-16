#include <iostream>
#include <vector>

int main()
{
	// List construction (uses list constructor)
	std::vector<int> primes{ 2, 3, 5, 7 };          // vector containing 4 int elements with values 2, 3, 5, and 7
	std::vector vowels { 'a', 'e', 'i', 'o', 'u' }; // vector containing 5 char elements with values 'a', 'e', 'i', 'o', and 'u'.  Uses CTAD (C++17) to deduce element type char (preferred).

    std::vector primes1 { 2, 3, 5, 7, 11 }; // hold the first 5 prime numbers (as int)

    std::cout << "The first prime number is: " << primes1[0] << '\n';
    std::cout << "The second prime number is: " << primes1[1] << '\n';
    std::cout << "The sum of the first 5 primes is: " << primes1[0] + primes1[1] + primes1[2] + primes1[3] + primes1[4] << '\n';

    std::vector<int> data( 10 ); // vector containing 10 int elements, value-initialized to 0

    std::vector prime2 { 2, 3, 5, 7, 11 };
    std::cout << "length: " << prime2.size() << '\n'; // returns length as type `size_type` (alias for `std::size_t`)
    std::cout << "length: " << std::size(prime2) << '\n'; // C++17, returns length as type `size_type` (alias for `std::size_t`)

	int length { static_cast<int>(prime2.size()) }; // static_cast return value to int
    std::cout << "length: " << length ;

    std::vector prime3{ 2, 3, 5, 7, 11 };
    std::cout << "length: " << std::ssize(prime3); // C++20, returns length as a large signed integral type
    auto length { std::ssize(prime3) }; // use auto to deduce signed type, as returned by std::ssize()

    std::cout << prime3.at(3); // print the value of element with index 3
    std::cout << prime3.at(9); // invalid index (throws exception)

    int index { 3 };                          // non-constexpr signed value
    std::cout << prime3.data()[index] << '\n'; // okay: no sign conversion warnings
    return 0;
}