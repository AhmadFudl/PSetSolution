#include <iostream>
#include <cmath>
#define epsilon 0.0000001
bool fequal(long double x, long double y) {return fabs(x - y) < epsilon;}
int main() {
  long double x;
  std::cin >> x;
  if (fequal(x, 0) || fequal(x, 25) || (x > 0 && x < 25)) {
    std::cout << "Interval [0,25]\n";
    return 0;
  }
  if ((x > 25 && x < 50) || fequal(x, 50)) {
    std::cout << "Interval (25,50]\n";
    return 0;
  }
  if ((x > 50 && x < 75) || fequal(x, 75)) {
    std::cout << "Interval (50,75]\n";
    return 0;
  }
  if ((x > 75 && x < 100) || fequal(x, 100)) {
    std::cout << "Interval (75,100]\n";
    return 0;
  }
  std::cout << "Out of Intervals\n";
  return 0;
}
