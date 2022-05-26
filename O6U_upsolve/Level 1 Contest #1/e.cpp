#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int frq[26];
  for (int i = 0; i < 26; i++)
    frq[i] = 0;
  std::string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
    frq[s[i]-'a']++;
  for (int i = 0; i < s.size(); i++)
    if (frq[s[i]-'a'] == 1)
      return cout << s[i] << std::endl, 0;
  puts("-1");
  return 0;
}
