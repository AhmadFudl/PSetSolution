#include <iostream>
#include <math.h>
int main() {
  int n; std::cin >> n; n = n / 5;
  int i = 0, temp = n;
  while (true) {
    n -= pow(2, i);
    if (n <=0 ) {
      break;
    }
    temp = n;
    i++;
  }
    std::cout << temp * 5 / pow(2, i) << std::endl;
    return 0;
}
//1280
//256
//105 * 5 = 525
//
