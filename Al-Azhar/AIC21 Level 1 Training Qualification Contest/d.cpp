#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  std::string s; cin >> s;
  int a = 0, m = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A')
      a++;
    else
      m++;
  }
  if (a > m)
    puts("Ahmed");
  else if (a < m)
    puts("Mostafa");
  else
    puts("Friendship");
  return 0;
}
