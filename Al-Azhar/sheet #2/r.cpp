#include <iostream>
#define put std::putchar
using std::cin;
using std::cout;
int main() {
  int n, m, ans;
  cin >> n >> m;
  while (n > 0 && m > 0) {
    ans = std::min(n, m);
    m = std::max(n, m);
    n = ans;
    ans = 0;
    for (int i = n; i <= m; i++)
      cout << i << ' ', ans+=i;
    cout << "sum =" << ans << '\n';
    cin >> n >> m;
  }
  return 0;
}
