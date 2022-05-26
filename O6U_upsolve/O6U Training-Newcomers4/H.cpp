#include <iostream>
#include <string>
using namespace std;
int main() {
  string word = "hello";
  string s; cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == word[ans]) {
      if (ans < 5)
        ans++;
      else
       break;
    }
  }
  if (ans == 5)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
