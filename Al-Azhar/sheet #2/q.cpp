#include <iostream>
int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    if (n == 0)
      std::putchar('0');
    while (n != 0)
      std::putchar(n%10 + 48), std::putchar(' '), n/=10;
    std::putchar('\n');
  }
  return 0;
}
