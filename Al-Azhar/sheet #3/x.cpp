#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, m, x, y; cin >> n >> m;
  char buffer[n][m];
  bool pass = true;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> buffer[i][j];
  cin >> x >> y;
  x--;
  y--;
  for (int i = x - 1; i < n && i >= 0 && i <= x+1; i++) {
    for (int j = y - 1; j < m && j >= 0 && j <= y+1; j++) {
      if (i == x && j == y)
        continue;
      if (!(buffer[i][j] == 'x'))
        pass = false;
    }
  }
  if (pass)
    puts("yes");
  else
    puts("no");
  return 0;
}
