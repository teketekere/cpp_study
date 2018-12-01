#include <iostream>
#include <complex>
#include <memory>
using namespace std;

int main()
{
    // auto cn = new complex<double>(5, 10);
    auto cn = make_unique<complex<double>>(5, 10);

    cout << *cn << endl;
    cout << abs(*cn) << endl;
    return 0;
}