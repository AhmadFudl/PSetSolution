#include <iostream>
int main() {
  int num;
  std::cin >> num;
  std::cout << num / 365 << " years\n";
  std::cout << (num % 365) / 30 << " months\n";
  std::cout << (num % 365) % 30 << " days\n";
  return 0;
}
