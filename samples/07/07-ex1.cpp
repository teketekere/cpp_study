#include <iostream>
#include "07-ex1.hpp"

using namespace std;

void reverse_str(string& target)
{
    reverse(target.begin(), target.end());
}

int main()
{
    string str = "This message will be reversed.";

    reverse_str(str);
    cout << str << endl;

    return 0;
}