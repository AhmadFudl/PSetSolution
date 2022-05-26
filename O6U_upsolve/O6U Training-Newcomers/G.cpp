#include <iostream>
using namespace std;
int main() {
  double a, b;
  cin >> a >> b;
  // 9 2
  double n = a / b;
  //n = 1
  int ans = n;
  //ans = 1
  int round = n;
  //round = 4
  //          0.5
  //       4.5 - 4
  double temp  = (n - round) * 10;
  round = temp;
  //round = 0.5
  cout << ans << endl;
  cout << "floor " << a << " / " << b << " = " << ans << endl;
  if ( round == 0)
    cout << "ceil " << a << " / " << b << " = " << ans << endl;
    else
    cout << "ceil " << a << " / " << b << " = " << ans+1 << endl;

  if (round >= 5)
    cout << "round " << a << " / " << b << " = " << ans + 1 << endl;
  else
    cout << "round " << a << " / " << b << " = " << ans << endl;
  return 0;
}
