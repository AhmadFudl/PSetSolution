#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int a, b, c; cin >> a >> b >> c;
  if (a >= b && b >= c)
    puts("YES");
  else
    puts("NO");
  return 0;
}
