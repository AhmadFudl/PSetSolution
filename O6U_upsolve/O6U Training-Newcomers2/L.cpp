#include <iostream>
using namespace std;
int main() {
  int a, b; cin >> a >> b;
  bool pass2 = false;
  for (int i = a; i <= b; i++) {
    int temp;
    int check = i;
    bool pass = true;
    while (check) {
      // 12
      // temp = 2
      temp = check % 10;
      // 4 != 4 false 4 != 7 true
      // false || true = true
      // false && true = false
      // my bad
      if (temp != 4 && temp != 7)
      {
        pass = false;
        break;
      }
      check = check / 10;
    }
    if (pass) {
      pass2 = true;
      cout << i << " ";
    }
  }
  if (!pass2)
  {
    cout << "-1" << endl;
  }
}
