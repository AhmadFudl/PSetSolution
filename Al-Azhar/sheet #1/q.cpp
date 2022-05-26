#include <iostream>
int main() {
  long double x, y;
  std::cin >> x >> y;
  if (x == 0 || y == 0) {
    if (x == 0 && y == 0)
      std::cout << "Origem\n";
    else if (y != 0)
      std::cout << "Eixo Y\n";
    else
      std::cout << "Eixo X\n";
  } else {
    if (x < 0 && y < 0)
      std::cout << "Q3\n";
    if (x > 0 && y > 0)
      std::cout << "Q1\n";
    if (x < 0 && y > 0)
      std::cout << "Q2\n";
    if (x > 0 && y < 0)
      std::cout << "Q4\n";
  }
  return 0;
}
