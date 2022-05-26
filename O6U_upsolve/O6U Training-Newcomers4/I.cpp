#include <iostream>
using namespace std;
int main() {
  string s; cin >> s;
  bool pass = false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?') {
      pass = true;
      continue;
    }
    if (s[i] == '=') {
      cout << ": ";
      continue;
    }
    if (s[i] == '&') {
      cout << '\n';
      continue;
    }
    if (pass) {
      cout << s[i];
    }
  }
  cout << '\n';
  return 0;
}
