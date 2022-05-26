#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int a, b; cin >> a >> b;
  char ch;
  for (int i = 0; i < a; i++) {
    cin >> ch;
    if (!isdigit(ch)) {
      puts("No");
      return 0;
    }
  }
  cin >> ch;
  if (!(ch == '-')) {
    puts("No");
    return 0;
  }
  for (int i = 0; i < b; i++) {
    cin >> ch;
    if (!isdigit(ch)) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
