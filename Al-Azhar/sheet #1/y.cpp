#include <iostream>
int main() {
  long long a, b, c, d;
  std::cin >> a >> b >> c >> d;
  a %=100;
  b %=100;
  c %=100;
  d %=100;
  long long ans = a * b * c * d;
  if (ans % 100 < 10)
    std::cout << '0' << ans % 100 << '\n';
  else
    std::cout << ans % 100 << '\n';
  return 0;
}
