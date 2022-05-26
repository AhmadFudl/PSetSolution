#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, m, x; cin >> n >> m;
  int buffer[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> buffer[i][j];
  cin >> x;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (x == buffer[i][j]) {
        puts("will not take number");
        return 0;
      }
    }
  }
  puts("will take number");
  return 0;
}
