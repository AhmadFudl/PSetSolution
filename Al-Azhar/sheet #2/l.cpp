#include <iostream>
int gcd(int a, int b) {
  int min = std::min(a, b), max = std::max(a, b);
  if (min == 0) return max;
  return gcd(min, max % min);
}
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << '\n';
  return 0;
}
