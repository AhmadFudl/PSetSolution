#include <iostream>
int main() {
  std::string s; std::cin >> s;
  bool pass = true;
  for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--)
    if (s[i] != s[j]) {
      pass = false;
      break;
    }
  std::cout << (pass ? "YES" : "NO") << std::endl;
  return 0;
}
