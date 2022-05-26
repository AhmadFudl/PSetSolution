#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  long long n; cin >> n;
  if (n == 1) {
    puts("0");
    return 0;
  }
  if (n == 2) {
    puts("1");
    return 0;
  }
  long long n1 = 0, n2 = 1, fib = 0;
  for (int i = 3; i <= n; i++) {
    n2 += n1;
    n1 = n2 - n1;
  }
  cout << n2 << std::endl;
  return 0;
}
