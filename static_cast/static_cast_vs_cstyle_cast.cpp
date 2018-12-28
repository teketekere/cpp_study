#include <iostream>

int main()
{
    char c = 0x50;
    int* i = (int*)&c;
    // int* si = static_cast<int*>(&c);
    // Above code cant be compiled!

    std::cout << c << std::endl;
    std::cout << *i << std::endl;
    return 0;
}
