#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, m; cin >> n >> m;
  int buffer[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> buffer[i][j];
  for (int i = 0; i < n; i++) {
    for (int j = m - 1; j >= 0; j--) {
      cout << buffer[i][j] << ' ';
    }
    cout << std::endl;
  }
  return 0;
}
