#include <iostream>
int main() {
  int t; std::cin >> t;
  std::string s;
  while (t--) {
    std::cin >> s;
    bool pass = false;
    if (s.size() >= 3) {
      for (int i = 0; i < s.size()-2; i++) {
        if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') {
          pass = true;
          break;
        }
        if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') {
          pass = true;
          break;
        }
      }
      if (!pass)
        std::cout << "Bad" << std::endl;
      else
        std::cout << "Good" << std::endl;
    }
    else {
      std::cout << "Bad" << std::endl;
    }
  }
}
