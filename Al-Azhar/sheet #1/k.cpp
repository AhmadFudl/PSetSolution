#include <algorithm>
#include <iostream>
int main() {
  int num[3];
  std::cin >> num[0] >> num[1] >> num[2];
  std::cout << *std::min_element(num, num+3) << " ";
  std::cout << *std::max_element(num, num + 3) << '\n';
  return 0;
}
