#include <iostream>
int main() {
  int l, b, ans = 0; std::cin >> l >> b;
  while (l <= b) {
    l *= 3;
    b *= 2;
    ans++;
  }
  std::cout << ans << "\n";
}
