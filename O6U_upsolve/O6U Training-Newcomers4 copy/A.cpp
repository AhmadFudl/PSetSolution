#include <iostream>
int main() {
  std::string s; std::cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size(); i++)
    ans += s[i]-48;
  std::cout << ans << std::endl;
  return 0;
}
