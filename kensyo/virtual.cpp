#include <iostream>

class Base
{
    public:
        Base(int n)
        {
            std::cout << "Base" << n << std::endl;
        }
};

class Derived: public Base
{
    public:
        Derived(int n): Base(n)
        {
            std::cout << "Derived" << std::endl;
        }
};

int main()
{
    Derived d{1};
    return 0;
}