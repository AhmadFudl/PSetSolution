#include <iostream>
 
using namespace std;
 
int main () {
  int n; cin >> n;
  int even = 0, odd = 0, positve = 0, negative = 0;
  for (int i = 0; i < n; i++) {
    int temp; cin >> temp;
    //even
    if (temp % 2 == 0)
      even++;
    //odd
    if (temp % 2 != 0)
      odd++;
    //positve
    if (temp > 0)
      positve++;
    //negative
    if (temp < 0)
      negative++;
  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << positve << endl;
  cout << "Negative: " << negative << endl;
}
