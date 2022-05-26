#include <iostream>
#include <stdio.h>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  for (int i = 0; i < n; i++) {
    if (buffer[i] <= 10)
      printf("A[%d] = %d\n", i, buffer[i]);
  }
  return 0;
}
