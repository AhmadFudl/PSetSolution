#include <algorithm>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n;
  cin >> n;
  int cube[n];
  for (int i = 0; i <= n-1; i++)
    cin >> cube[i];
  std::sort(cube, cube+n);
  for (int i = 0; i <= n-2; i++)
    cout << cube[i] << ' ';
  cout << cube[n-1] << '\n';
  return 0;
}
