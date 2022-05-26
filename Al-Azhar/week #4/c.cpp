#include <iostream>
#include <algorithm>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  int n, m, a = 0, b = 0; cin >> n >> m;
  int t1, t2;
  for (int i = 0; i < n; i++) {
    cin >> t1 >> t2;
    if (!(t1 >= a && t1 <= b))
      return puts("NO"), 0;
    a = t1;
    b = std::max(t2, b);
  }
  if (m >= t1 && m <= b)
    return puts("YES"), 0;
  else
    return puts("NO"), 0;
}
