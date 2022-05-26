#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n = 0, min = INT_MAX, freq = 0; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> buffer[i];
    if (buffer[i] < min)
      min = buffer[i];
  }
  for (int i = 0; i < n; i++)
    if (buffer[i] == min)
      freq++;
  freq % 2 == 0 ? puts("Unlucky") : puts("Lucky");
  return 0;
}
