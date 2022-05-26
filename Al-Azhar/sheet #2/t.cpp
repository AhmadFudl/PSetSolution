#include <cstdio>
#include <iostream>

#define put std::putchar
using std::cin;

void print(int i, int n) {
  while (n--)
    put(' ');
  while (i--)
    put('*');
  put('\n');
}

int main() {
  int n, i = 1; cin >> n;
  while (n--) {
    print(i, n), i+=2;
  }
  return 0;
}
