#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, x; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  cin >> x;
  for (int i = 0; i < n; i++) {
    if (buffer[i] == x) {
      cout << i << std::endl;
      return 0;
    }
  }
  cout << -1 << std::endl;
  return 0;
}
