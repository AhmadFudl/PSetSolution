#include <iostream>
int main() {
  int a, ans = 0; std::cin >> a;
  for (int i = 1; i < a; i++)
    if (a % i == 0)
      ans++;
  std::cout << ans << std::endl;
  return 0;
}
