#include <algorithm>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

struct bottler {
  int a, b, c;
};

int main() {
  bottler a[3];
  int out = 0;
  cin >> a[0].a >> a[0].b >> a[0].c;
  cin >> a[1].a >> a[1].b >> a[1].c;
  cin >> a[2].a >> a[2].b >> a[2].c;
  out += std::min(std::min(a[0].a, a[0].b), a[0].c);
  out += std::min(std::min(a[1].a, a[1].b), a[1].c);
  out += std::min(std::min(a[2].a, a[2].b), a[2].c);
  cout << out << std::endl;
  return 0;
}
