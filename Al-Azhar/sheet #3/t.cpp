#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int buffer[n][n];
  int Msum = 0;
  int Ssum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> buffer[i][j];
      if (i == j) {
        Msum += buffer[i][j];
      }
    }
    Ssum += buffer[i][n - 1 - i];
  }
  int sum = Msum - Ssum;
  cout << (sum >= 0 ? sum : sum * -1) << std::endl;
  return 0;
}
