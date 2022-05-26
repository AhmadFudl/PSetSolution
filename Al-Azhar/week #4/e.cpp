#include <iostream>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  int y, k, n;
  cin >> y >> k >> n;
  n = n-y;
  y = k - y%k;
  bool pass = false;
  while (y <= n) {
    cout << y << " ";
    y += k;
    pass = true;
  }
  if (!pass) puts("-1");
  else puts("");
	return 0;
}
