#include <iostream>
#include <iomanip>
int main() {
  float pi = 3.141592653, r;
  std::cin >> r;
  std::cout << std::fixed << std::setprecision(9) << r*r*pi << '\n';;
  return 0;
}
