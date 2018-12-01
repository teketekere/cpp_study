#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "start" << std::endl;
    for(int i=0; i<20; ++i)
    {
        for(int ch=i*0xf; ch<i*0xf+0xf; ++ch)
        {
            std::cout << std::setw(2) << char(ch);
        }

        std::cout << std::endl;
    }
    
    return 0;
}
