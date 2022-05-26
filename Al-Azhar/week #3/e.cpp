#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  bool alphabet[26] = {0};
  char temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    alphabet[tolower(temp) - 97] = true;
  }
  for (int i = 0; i < 26; i++) {
    if (!alphabet[i]) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
