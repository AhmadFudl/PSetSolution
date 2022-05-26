#include <iostream>
#include <iomanip>
int main() {
  int n, m, a, b; std::cin >> n >> m >> a >> b;
  double min = (double)a/b;
  for (int i = 1; i < n; i++) {
    std::cin >> a >> b;
    if ((double)a/b < min)
      min = (double)a/b;
  }
  std::cout << std::fixed << std::setprecision(8) <<  min * m<< std::endl;
  return 0;
}
