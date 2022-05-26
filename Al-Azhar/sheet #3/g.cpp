#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  for (int i = 0; i < n/2; i++) {
    if (buffer[i] != buffer[n-1-i]) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
