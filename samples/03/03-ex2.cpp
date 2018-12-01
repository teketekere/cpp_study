#include <iostream>
#include <typeinfo>

int main()
{
    unsigned int a = 2;
    int b = -3;
    auto sum = a + b;

    std::cout << "Type is " << typeid(sum).name()<< std::endl;
    std::cout << "Value is " << sum << std::endl;
    return 0;
}
