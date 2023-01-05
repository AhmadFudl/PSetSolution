#include <cstdlib>
#include <iterator>
#include <iostream>
#define int long long
#define endl '\n'

using namespace std;

auto main() -> signed {

  int n, k; 
  cin >> n >> k;

  int sz = 0;
  string out = "";
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    if (sz + size(str) <= k) {
      if (size(out) > 0) out += " " + str;
      else               out += str;
      sz += size(str);
      if (i == n-1)
        cout << out << endl;
    }
    else {
      cout << out << endl;
      sz = (int) size(str);
      out = str;
      if (i == n-1)
        cout << out << endl;
    }
  }

  return EXIT_SUCCESS;
}
