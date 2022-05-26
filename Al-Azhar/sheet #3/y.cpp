#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, q, l, r; cin >> n >> q;
  long long sum[n+1];
  for (int i = 1; i <= n; i++) {
    cin >> sum[i];
    sum[i] += sum[i-1];
  }
  while (q--) {
    cin >> l >> r;
    cout << sum[r] - sum[l-1] << std::endl;
  }
  return 0;
}
