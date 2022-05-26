#include <iostream>
#include <iomanip>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  double x; cin >> x;
  cout << std::fixed << std::setprecision(6) << (((2*x) * (2*x)) - 3.1415926536 * (x*x))/4 << std::endl;
  return 0;
}
