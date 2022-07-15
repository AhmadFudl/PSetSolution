#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <climits>
#include <iterator>

#define put std::putchar

int main() {
  using std::cin;
  using std::cout;
  int t, n, s; cin >> t;
  for (int k = 1; k <= t; k++) {
    std::map<int, int> frq;
    std::set<int> buffer;
    int out = 0;
    //in
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> s;
      buffer.insert(s);
      frq[s]++;
    }
    bool pass = true;
    int b = 0;
    int offset = 0;
    for (auto i : buffer) {
      if (frq[i] > i-b) {
        out += std::min(i-b, frq[i]) + std::min(frq[i] - (i - b), offset);
        offset -= std::min(frq[i] - (i - b), offset);
      }
      else {
        out += std::min(i-b, frq[i]);
        offset += i-b - frq[i];
      }
      b = i;
    }
    //out
    cout << "Case #" << k << ": ";
    cout << out << '\n';
  }
  return 0;
}
