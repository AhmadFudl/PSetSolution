#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int t; cin >> t;
  long long n, sum; 
  while (t--) {
    cin >> n;
    sum = (n % 2 == 0 ? (n + 1) * (n+0) / 2 : n * (n+1) / 2);
    for (long long i = 1; i <= n; i *= 2)
      sum -= 2*i;
    cout << sum << std::endl;
  }
  return 0;
}
