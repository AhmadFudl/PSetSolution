#include <cstdio>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, a, b, c, d;
    bool pass = true;
    cin >> n >> a >> b >> c >> d;
    if (n*(a+b) < (c-d) || (c+d) < n*(a-b))
      puts("No");
    else
      puts("Yes");
  }
  return 0;
}
