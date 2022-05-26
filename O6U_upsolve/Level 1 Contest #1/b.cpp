#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int x, y;
  cin >> x >> y;
  if (x > 0 && y > 0) { puts("1"); }
  else if (x > 0 && y < 0) { puts("4"); }
  else if (x < 0 && y > 0) { puts("2"); }
  else { puts("3"); }
  return 0;
}
