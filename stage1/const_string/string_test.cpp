#include <iostream>
#include <string> // For std::string and std::getline

void test1()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // read a full line of text into name

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color); // read a full line of text into color

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
}

void test2()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // note: no std::ws here

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

}

void test3()
{
    std::string name{ "Alex" };
    std::cout << name << " has " << name.length() << " characters\n";
}

void printString(std::string str)
{
	std::cout << str << '\n';
}

void test4()
{
	std::string_view sv{ "Hello, world!" };

	// printString(sv);   // compile error: won't implicitly convert std::string_view to a std::string

	std::string s{ sv }; // okay: we can create std::string using std::string_view initializer
	printString(s);      // and call the function with the std::string

	printString(static_cast<std::string>(sv)); // okay: we can explicitly cast a std::string_view to a std::string
}

int main()
{
    //test1();
    //test2();
    //test3();
    test4();

    return 0;
}