#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

void putU(int i, int n) {
  while (n--) put(' ');
  while (i--) put('*');
  put('\n');
}

void putD(int i, int n) {
  while (n--) put(' ');
  while (i--) put('*');
  put('\n');
}

int main() {
  int n;
  cin >> n;
  int temp = n;
  int i = 1;
  while (n--)
    putU(i, n), i+=2;
  n = temp;
  i = 0;
  while (n--)
    putD(2*n+1, i), i++;
  return 0;
}
