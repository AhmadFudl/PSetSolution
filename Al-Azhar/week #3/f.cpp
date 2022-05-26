#include <algorithm>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, m, l, r; cin >> n;
  char type;
  long long buffer[n + 1], SortedBuffer[n + 1];
  buffer[0] = SortedBuffer[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> buffer[i];
    SortedBuffer[i] = buffer[i];
  }
  for (int i = 1; i <= n; i++)
    buffer[i] += buffer[i-1];
  std::sort(SortedBuffer, SortedBuffer + n + 1);
  for (int i = 1; i <= n; i++)
    SortedBuffer[i] += SortedBuffer[i-1];
  cin >> m;
  while (m--) {
    cin >> type >> l >> r;
    if (type == '1')
      cout << buffer[r] - buffer[l-1] << std::endl;
    else
      cout << SortedBuffer[r] - SortedBuffer[l-1] << std::endl;
  }
  return 0;
}
