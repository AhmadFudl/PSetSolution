#include <algorithm>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, q, x; cin >> n >> q;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  std::sort(buffer, buffer+n);
  while (q--) {
    cin >> x;
    if (std::binary_search(buffer, buffer + n, x))
      puts("found");
    else
      puts("not found");
  }
  return 0;
}
