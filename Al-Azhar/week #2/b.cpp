#include <cstring>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n, counter = 0;
  cin >> n;
  bool div[n+1];
  std::memset(div, 0, n+1);
  for (int i = 1; i <= n; i++)
    if (n % i == 0)
      div[i] = true, counter++;
  cout << counter << '\n';
  for (int i = 1; i < n; i++)
    if (div[i])
      cout << i << ' ';
  cout << n << '\n';
  return 0;
}
