#include <cctype>
#include <iostream>
using namespace std;
int main() {
  std::string s; std::cin >> s;
  for (int i = 0 ; i < s.size(); i++) {
    if (s[i] == ',') {
      s[i] = ' ';
      continue;
    }
    if (isupper(s[i])) {
      s[i] = tolower(s[i]);
    }
    else {
      s[i] = toupper(s[i]);
    }
  }
  cout << s << endl;
  return 0;
}
