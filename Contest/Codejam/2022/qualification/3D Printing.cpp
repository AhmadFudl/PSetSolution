#include <iostream>
#include <climits>

#define put std::putchar

struct cart {
  int c, m, y, k;
};

int main() {
  using std::cin;
  using std::cout;
  int t; cin >> t;
  cart p[3];
  for (int k = 1; k <= t; k++) {
    cart min;
    min.c = min.m = min.y = min.k = INT_MAX;
    for (int i = 0; i < 3; i++)
      cin >> p[i].c >> p[i].m >> p[i].y >> p[i].k;
    for (int i = 0; i < 3; i++) {
      if (min.c > p[i].c) min.c = p[i].c;
      if (min.m > p[i].m) min.m = p[i].m;
      if (min.y > p[i].y) min.y = p[i].y;
      if (min.k > p[i].k) min.k = p[i].k;
    }
    cout << "Case #" << k << ": ";
    if (min.c + min.m + min.y + min.k < 1e6) { puts("IMPOSSIBLE"); continue; }
    else {
      int out = 1e6;
      if (min.c <= out) { cout << min.c; out -= min.c; }
      else { cout << out; out -= out; }
      put(' ');
      if (min.m <= out) { cout << min.m; out -= min.m; }
      else { cout << out; out -= out; }
      put(' ');
      if (min.y <= out) { cout << min.y; out -= min.y; }
      else { cout << out; out -= out; }
      put(' ');
      if (min.k <= out) { cout << min.k; out -= min.k; }
      else { cout << out; out -= out; }
      put('\n');
    }
  }
  return 0;
}
