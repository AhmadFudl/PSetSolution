#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    int buffer[n], min = INT_MAX;
    for (int i = 0; i < n; i++)
      cin >> buffer[i];
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (min > buffer[i] + buffer[j] + j - i)
          min = buffer[i] + buffer[j] + j - i;
      }
    }
    cout << min << std::endl;
  }
  return 0;
}
