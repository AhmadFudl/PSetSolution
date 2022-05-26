#include <iostream>
int main() {
  std::string x, y; std::cin >> x >> y;
  int size = std::min(x.size(), y.size());
  for (int i = 0; i < size; i++) {
    if (x[i] - y[i] > 0) {
      std::cout << y << std::endl;
      return 0;
    }
    else {
      if (x[i] - y[i] < 0) {
        std::cout << x << std::endl;
        return 0;
      }
    }
  }
  if (x.size() >= y.size())
    std::cout << y << std::endl;
  else
    std::cout << x << std::endl;
  return 0;
}
