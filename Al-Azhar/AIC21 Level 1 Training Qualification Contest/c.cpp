#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  while (n) {
    cout << n % 10 << std::endl;
    n /= 10;
  }
  return 0;
}
