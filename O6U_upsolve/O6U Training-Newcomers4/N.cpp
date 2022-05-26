#include <iostream>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int ans = 0;
    int buffer[n+1];
    for (int i = 1; i < n+1; i++)
      cin >> buffer[i];
    int last = 0;
    if (n != 1) {
      int i = 1;
      for (; i < n; i++) {
        if (buffer[i] > buffer[i+1]) {
          //n*(1+n)/2
          ans += ((i - last) * (1 + i-last)) / 2;
          last = i;
        }
      }
      //1 4 - 2 5 - 3
      ans += ((i - last) * (1 + i-last)) / 2;
      cout << ans << endl;
    }
    else {
      cout << 1 << endl;
    }
  }
}
