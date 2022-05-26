#include <iostream>
int main() {
  std::string s; std::cin >> s;
  int i = 0, ans = 0; // hello = 5
  for (; i < s.size(); i++)
    if (s[i] == 'h') {
      ans++;
      break;
    }
  i++;
  for (; i < s.size(); i++)
    if (s[i] == 'e') {
      ans++;
      break;
    }
  i++;
  for (; i < s.size(); i++)
    if (s[i] == 'l') {
      ans++;
      break;
    }
  i++;
  for (; i < s.size(); i++)
    if (s[i] == 'l') {
      ans++;
      break;
    }
  i++;
  for (; i < s.size(); i++)
    if (s[i] == 'o') {
      ans++;
      break;
    }
  std::cout << (ans == 5 ? "YES" : "NO") << std::endl;
  return 0;
}
