#include <iostream>
using namespace std ;
int main () {
  //n = 123
  int n; cin >> n;
  int reverse = 0;
  int temp = n;
  //reverse * 10
  //reverse = n % 10
  //n = n / 10
  while (n) {
    reverse *= 10;
    reverse += n % 10;
    n = n / 10;
  }
  // reverse = 321
  // n = 0
  // temp = 123
  cout << reverse << endl;
  if (reverse == temp)
    cout << "YES" << endl;
  else
   cout << "NO" << endl;
}

