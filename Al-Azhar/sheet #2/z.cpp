#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int k, s;
  cin >> k >> s;
  int ans = 0;
  for (int i = 0; i <= k && i <= s; i++)
    for (int j = 0; j <= k && j <= s; j++)
      if (s-j-i <= k && s-i-j >= 0)
        ans++;
  cout << ans << '\n';
  return 0;
}
