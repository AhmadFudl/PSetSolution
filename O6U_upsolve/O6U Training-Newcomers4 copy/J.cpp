#include <algorithm>
#include <iostream>
int main() {
  std::string s; std::cin >> s;
  int buffer[5] = {0,0,0,0,0};
  for (int i = 0; i < s.size(); i++) {
    if (tolower(s[i]) == 'e') {
      buffer[0]++;
      continue;
    }
    if (tolower(s[i]) == 'g') {
      buffer[1]++;
      continue;
    }
    if (tolower(s[i]) == 'y') {
      buffer[2]++;
      continue;
    }
    if (tolower(s[i]) == 'p') {
      buffer[3]++;
      continue;
    }
    if (tolower(s[i]) == 't') {
      buffer[4]++;
      continue;
    }
  }
  std::cout << *std::min_element(buffer, buffer+5) << std::endl;
  return 0;
}
