#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n, sum = 0;
  cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> buffer[i];
    sum += buffer[i];
  }
  for (int i = 0; i < n; i++)
    if (sum - 2 * buffer[i] == 0)
      return cout << i+1 << std::endl, 0;
  cout << -1 << std::endl;
  return 0;
}
