#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, sum = 0; cin >> n;
  char digit;
  for (int i = 0; i < n; i++) {
    cin >> digit;
    sum += digit - 48;
  }
  cout << sum << std::endl;
  return 0;
}
