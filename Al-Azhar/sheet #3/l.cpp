#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    int buffer[n];
    for (int i = 0; i < n; i++)
      cin >> buffer[i];
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j <= n; j++) {
        int max = INT_MIN;
        //cout << i << " " << j << std::endl;
        for (int k = i; k < j; k++) {
          //cout << k << std::endl;
          if (buffer[k] > max)
            max = buffer[k];
        }
        cout << max << ' ';
      }
    }
    put('\n');
  }
  return 0;
}
