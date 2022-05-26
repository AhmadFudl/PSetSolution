#include <iostream>
int main() {
  int num; std::cin >> num;
  for (int i = 1; i <= 12; i++)
    std::cout << num << " * " << i << " = " << num * i << '\n';
  return 0;
}
