#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int r1, r2, c1, c2, d1, d2;

bool check(int a, int b, int c, int d) {
  if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    if (r1 == a+b && r2 == c+d && d1 == a+d && d2 == b+c && c1 == a+c && c2 == b+d)
      return true;
  return false;
}

int main() {
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      for (int k = 1; k <= 9; k++) {
        for (int l = 1; l <= 9; l++) {
          if (check(i, j, k, l))
            return cout << i << ' ' << j << '\n' << k << ' ' << l << '\n', 0;
        }
      }
    }
  }
  cout << "-1\n";
  return 0;
}
