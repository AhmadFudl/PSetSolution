#include <iostream>
using namespace std;
int main() {
  int t; cin >> t;
  //true = 1 12 200 -21
  //false = 0
  while (t--) {
    long long  n; cin >> n;
    long long answer = 1;
    for (int i = n; i >= 1; i--) {
      // answer = 5 * (5 -1)
      // answer = 20 * (5 - 2)
      answer = answer * i;
    }
    cout << answer << endl;
  }
}
