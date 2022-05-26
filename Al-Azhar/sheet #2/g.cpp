#include <iostream>
int main() {
  int t, n; std::cin >> t;
  long long ans;
  while (t--) {
    std::cin >> n;
    ans = 1;
    while (n != 0) ans *= n--;
    std::cout << ans << '\n';
  }
  return 0;
}
