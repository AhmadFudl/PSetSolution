#include <iostream>
using namespace std;
int main() {
  // 12 12 lksadjf
  // aslkdjf
  int a, b;
  char sign;
  cin >> a >> sign >> b;
  // 12>12
  // 12 -> a '-' -> sign 12 -> b
  if (sign == '+')
    cout << a+b << endl;
  if (sign == '-')
    cout << a-b << endl;
  if (sign == '/')
    cout << a/b << endl;
  if (sign == '*')
    cout << a*b << endl;
  return 0;
}

