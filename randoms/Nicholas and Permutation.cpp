#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int xidx = 0, nidx = 0, min = INT_MAX, max = INT_MIN;
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> buffer[i];
    if (buffer[i] > max) {
      max = buffer[i];
      xidx = i;
    }
    if (buffer[i] < min) {
      min = buffer[i];
      nidx = i;
    }
  }
  cout << std::max(std::max((n-1) - xidx, xidx - 0),std::max((n-1) - nidx, nidx - 0)) << std::endl;
  return 0;
}
