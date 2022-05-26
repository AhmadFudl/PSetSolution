#include <iostream>
int main() {
  long long n, q, l, r; std::cin >> n >> q;
  n++;
  long long a[n];
  a[0] = 0;
  for (int i = 1; i < n; i++) {
    std::cin >> a[i];
    a[i] += a[i-1];
  }
  while (q--) {
    std::cin >> l >> r;
    std::cout << a[r] - a[l-1] << std::endl;
  }
  return 0;
}
