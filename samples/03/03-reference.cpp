#include <iostream>

int main() {
  using namespace std;

  int a = 10;
  int& b = a;       //参照の定義
  b = 15;           //bに代入するとaの値が変わる
  cout << a << endl;//出力値：15
}