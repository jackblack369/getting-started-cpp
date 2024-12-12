#include <iostream>

class Dollars
{
private:
    int m_dollars{};

public:
    explicit Dollars(int d) // now explicit
        : m_dollars{ d }
    {
    }

    int getDollars() const { return m_dollars; }
};

void print(Dollars d)
{
    std::cout << "$" << d.getDollars() << '\n';
}

int main()
{
    // print(5); // compilation error because Dollars(int) is explicit

    Dollars d1(5); // ok
    Dollars d2{5}; // ok

    print(d1);
    print(d2);

    print(static_cast<Dollars>(5)); // ok: static_cast will use explicit constructors
    
    return 0;
}