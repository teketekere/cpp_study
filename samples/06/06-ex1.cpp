#include <iostream>
#include <vector>
using namespace std;

/**
 * hoge
 */
template<typename T>
T total(const vector<vector<T>>& mat)
{
    T sum = 0;
    for(const auto& vec: mat)
    {
        for(const auto elem: vec)
        {
            sum += elem;
        }
    }

    return sum;
}

int main()
{
    auto m = vector<vector<int>>{ {1, 2, 3}, {4, 5, 6}};

    cout << total(m) << endl;
}