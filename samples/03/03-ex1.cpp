#include <iostream>
#include <string>

int main()
{
    std::string text = "Hello World!";
    std::string raw_text = R"(Hello World!\n)";

    std::cout << text << std::endl;
    std::cout << raw_text << std::endl;
}