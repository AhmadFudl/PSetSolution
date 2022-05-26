#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, idx = 0; cin >> n;
  int buffer[n];
  bool pass = true;
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  for (int i = 0; i < n; i++) {
    if (buffer[idx] > buffer[i] || pass) {
      idx = i;
      pass = false;
    }
  }
  cout << buffer[idx] << " " << idx + 1 << std::endl;
  return 0;
}
