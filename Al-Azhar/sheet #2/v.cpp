#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int a;
  cin >> a;
  a *= 4;
  for (int i = 1; i <= a; i++)
    if (i % 4 == 0)
      cout << "PUM\n";
    else
      cout << i << ' ';
  return 0;
}
