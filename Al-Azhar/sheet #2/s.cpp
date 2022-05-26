#include <iostream>
#define put std::putchar
using std::cin;
using std::cout;
int main() {
  int t, n, m, sum; std::cin >> t;
  while (t--) {
    cin >> n >> m;
    sum = std::min(n, m);
    m = std::max(n, m);
    n = sum;
    sum = 0;
    for (int i = n+1; i <= m-1; i++)
      if (i % 2 != 0)
        sum += i;
    cout << sum << '\n';
  }
  return 0;
}
