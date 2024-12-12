#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double wage {};
};

struct Foo
{
    int a{};
    int b{};
    int c{};
};

std::ostream& operator<<(std::ostream& out, const Foo& f)
{
    out << f.a << ' ' << f.b << ' ' << f.c;
    return out;
}

struct Fraction
{
	int numerator { }; // we should use { 0 } here, but for the sake of example we'll use value initialization instead
	int denominator { 1 };
};

int main()
{
    Employee joe { 1, 32, 60000.0 };
    joe = { .id = joe.id, .age = 33, .wage = 66000.0 }; // Joe had a birthday and got a raise

    Foo foo { 1, 2, 3 };

    Foo x = foo; // copy-initialization
    Foo y(foo);  // direct-initialization
    Foo z {foo}; // direct-list-initialization

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    Fraction f1;          // f1.numerator value initialized to 0, f1.denominator defaulted to 1
	Fraction f2 {};       // f2.numerator value initialized to 0, f2.denominator defaulted to 1
	Fraction f3 { 6 };    // f3.numerator initialized to 6, f3.denominator defaulted to 1
	Fraction f4 { 5, 8 }; // f4.numerator initialized to 5, f4.denominator initialized to 8

    return 0;
}