#include <iostream>
#include <string>
#include <string_view>
#include <typeinfo>
#include <cxxabi.h>

float test1()
{
    auto a { 1.23f }; // f suffix causes a to be deduced to float
    auto b { 5u };    // u suffix causes b to be deduced to unsigned int
    return a + b;     // a is float, b is unsigned int, so return type will be float
}

void test2()
{
    int a { 5 };            // a is an int

    const auto b { 5 };     // b is a const int
    constexpr auto c { 5 }; // c is a constexpr int
}

void test_literal()
{
    using namespace std::literals; // easiest way to access the s and sv suffixes

    auto s1 { "goo"s };  // "goo"s is a std::string literal, so s1 will be deduced as a std::string
    auto s2 { "moo"sv }; // "moo"sv is a std::string_view literal, so s2 will be deduced as a std::string_view
    
    std::cout << s1 << '\n';
    std::cout << s2 << '\n';
}

auto add(int x, int y) -> int
{
    return (x + y);
}

auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
auto printSomething() -> void;
auto generateSubstring(const std::string &s, int start, int len) -> std::string;

int main()
{
    // auto sum { add(5, 6) }; // add() returns an int, so sum's type will be deduced as an int
    // std::cout << test1() << '\n';
    // test_literal();

    std::cout << add(1, 2) << '\n';

    return 0;
}