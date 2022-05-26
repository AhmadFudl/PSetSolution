#include <iostream>
#include <cmath>

//#pragma GCC target ("sse4")
#define put std::putchar
#define __builtin_popcountll std::__libcpp_popcount
using std::cin;
using std::cout;

int main() {
  int t;
  cin >> t;
  std::uint64_t n;
  while (t--) {
    cin >> n;
    int i = __builtin_popcountll(n);
    n = 0;
    for (int j = 0; j <= i-1; j++)
      n += std::pow(2, j);
    cout << n << '\n';
  }
  return 0;
}
