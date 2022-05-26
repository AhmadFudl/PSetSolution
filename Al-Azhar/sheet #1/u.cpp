#include <iostream>
#include <cmath>
#define epsilon 0.0000001
bool fequal(long double x, long double y) {return fabs(x - y) < epsilon;}
int main() {
  double n; std::cin >> n;
  if (fequal(n,(int)n))
    std::cout << "int " << (int)n << '\n';
  else
    std::cout << "float " << (int)n << ' ' << n - (int)n << '\n';
  return 0;
}
