#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int buffer[n];
  int out = 0;
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  for (int i = 1; i < n; i++)
    if (buffer[i] / 10 != buffer[i-1] % 10)
      out++;
  cout << out << std::endl;
  return 0;
}
