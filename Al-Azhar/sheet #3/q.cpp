#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int t, n, counter; cin >> t;
  bool pass = true;
  while (t--) {
    cin >> n;
    int buffer[n];
    counter = 0;
    for (int i = 0; i < n; i++)
      cin >> buffer[i];
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j <= n; j++) {
        pass = true;
        for (int k = i; k < j-1; k++) {
          if (buffer[k] > buffer[k+1])
            pass = false;
        }
        if (pass)
          counter++;
      }
    }
    cout << counter << std::endl;
  }
  return 0;
}
