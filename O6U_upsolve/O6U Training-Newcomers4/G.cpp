#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    string s, t; cin >> s >> t;
    int min;
    if (s.size() >= t.size())
      min = t.size();
    else
      min = s.size();
    for (int i = 0; i < min; i++)
      cout << s[i] << t[i];
    if (s.size() >= t.size()) {
      for (;min < s.size(); min++)
        cout << s[min];
    }
    else {
      for (;min < t.size(); min++)
        cout << t[min];
    }
    cout << "\n";
  }
}
