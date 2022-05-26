#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  long long n; cin >> n;
  if (n % 2 == 0)
    cout << n / 2 << std::endl;
  else
    cout << (n - 1) / 2 - n << std::endl;
  return 0;
}
