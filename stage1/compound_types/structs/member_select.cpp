#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double wage {};
};

struct Point
{
    double x {};
    double y {};
};

struct Triangle
{
    Point* a {};
    Point* b {};
    Point* c {};
};

struct Paw
{
    int claws{};
};

struct Animal
{
    std::string name{};
    Paw paw{};
};

int main()
{
    Employee joe { 1, 34, 65000.0 };

    // Use member selection operator (.) to select a member from struct object
    ++joe.age; // Joe had a birthday
    joe.wage = 68000.0; // Joe got a promotion

    Employee* ptr{ &joe };
    std::cout << ptr->id << '\n'; // Better: use -> to select member from pointer to object

    Point a {1,2};
    Point b {3,7};
    Point c {10,2};

    Triangle tr { &a, &b, &c };
    Triangle* ptr2 {&tr};

    // ptr is a pointer to a Triangle, which contains members that are pointers to a Point
    // To access member y of Point c of the Triangle pointed to by ptr, the following are equivalent:

    // access via operator.
    std::cout << (*(*ptr2).c).y << '\n'; // ugly!

    // access via operator->
    std::cout << ptr2 -> c -> y << '\n'; // much nicer


    Animal puma{ "Puma", { 5 } };

    Animal* ptr3{ &puma };

    // ptr is a pointer, use ->
    // paw is not a pointer, use .

    std::cout << (ptr3->paw).claws << '\n';

    return 0;
}