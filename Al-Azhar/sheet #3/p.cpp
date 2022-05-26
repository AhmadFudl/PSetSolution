#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, temp; cin >> n;
  int min = INT_MAX, counter = 0;
  int buffer[n];
  bool pass = true;
  for (int i = 0; i < n; i++) {
    cin >> buffer[i];
    if (!(buffer[i] % 2 == 0)) {
      puts("0");
      return 0;
    }
  }
  while (pass) {
    for (int i = 0; i < n; i++) {
      buffer[i] /= 2;
      if (!(buffer[i] % 2 == 0))
        pass = false;
    }
    counter++;
  }
  cout << counter << std::endl;
  return 0;
}
