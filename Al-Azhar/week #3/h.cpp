#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  long long n; cin >> n;
  long long a[n + 1];
  long long counter = 0;
  a[0] = 0;
  for (long long i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  for (long long i = 1; i < n; i++) {
    if (a[i] - a[0] == a[n] - a[i])
      counter++;
  }
  cout << counter << std::endl;
  return 0;
}
