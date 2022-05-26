#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  long long t, n, a, b, c; cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    for (int i = 2; i < n; i++)
      cin >> c;
    if (a + b <= c)
      cout << "1 2 " << n << std::endl;
    else
      puts("-1");
  }
  return 0;
}
