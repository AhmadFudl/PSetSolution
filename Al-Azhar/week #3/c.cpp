#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  long long n, k; cin >> n >> k;
  long long mid = (n+1)/2;
  if (k > mid)
    cout << (k - mid) * 2 << std::endl;
  else
    cout << k * 2 - 1 << std::endl;

  return 0;
}
