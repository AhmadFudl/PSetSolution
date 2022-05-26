#include <cctype>
#include <iostream>
int main() {
  std::string s; std::cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ',') {
      s[i] = ' ';
      continue;
    }
    if (std::islower(s[i])) {
      s[i] = toupper(s[i]);
    }
    else {
      s[i] = tolower(s[i]);
    }
  }
  std::cout << s << std::endl;
  return 0;
}
