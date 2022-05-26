#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int sum(int n) {
  int sum = 0;
  while (n != 0)
    sum += n%10, n/=10;
  return sum;
}
int main() {
  int n, a, b, ans = 0;
  std::cin >> n >> a >> b;
  for (int i = 1; i <= n; i++)
    if (sum(i) >= a && sum(i) <= b)
      ans+= i;
  cout << ans << '\n';
  return 0;
}
