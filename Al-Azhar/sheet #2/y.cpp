#include <cstdio>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n;
  cin >> n;
  if (n == 1)
    put('0');
  else {
    cout << "0 1 ";
    n-=2;
    int a = 0, b = 1;
    while (n--) {
      cout << a + b << ' ';
      b += a;
      a = b - a;
    }
  }
  put('\n');
  return 0;
}
