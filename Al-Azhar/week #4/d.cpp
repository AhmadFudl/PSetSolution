#include <cstring>
#include <iostream>
#include <vector>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  std::string s; cin >> s;
  std::vector<int> a, b;
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] == 'A' && s[i+1] == 'B')
      a.push_back(i);
    if (s[i] == 'B' && s[i+1] == 'A')
      b.push_back(i);
  }
  bool pass = true;
  if (a.size() >= 1 && b.size() >= 1) {
    for (int i = 0; i < a.size(); i++) {
      for (int j = 0; j < b.size(); j++) {
        if (abs(a[i] - b[j]) != 1) {
          return puts("YES"), 0;
        }
      }
    }
  }
  return puts("NO"), 0;
}
