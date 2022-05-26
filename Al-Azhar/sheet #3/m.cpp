#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int MaxIdx = 0, MinIdx = 0, min = INT_MAX, max = INT_MIN;
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> buffer[i];
    if (buffer[i] > max) {
      MaxIdx = i;
      max = buffer[i];
    }
    if (buffer[i] < min) {
      MinIdx = i;
      min = buffer[i];
    }
  }
  buffer[MinIdx] += buffer[MaxIdx];
  buffer[MaxIdx] = buffer[MinIdx] - buffer[MaxIdx];
  buffer[MinIdx] -= buffer[MaxIdx];
  for (int i = 0; i < n - 1; i++) {
    cout << buffer[i] << ' ';
  }
  cout << buffer[n - 1] << std::endl;
  return 0;
}
