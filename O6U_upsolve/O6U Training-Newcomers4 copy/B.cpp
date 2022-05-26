#include <iostream>
int main() {
  int t; std::cin >> t;
  while (t--) {
    std::string s; std::cin >> s;
    if (s.size() > 10)
    std::cout << s[0] << s.size() - 2 << s[s.size()-1] << std::endl;
    else
    std::cout << s << std::endl;;
  }
  return 0;
}
