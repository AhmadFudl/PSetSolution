#include <iostream>
int main() {
  int a, b;
  std::cin >> a >> b;
  if (a % b == 0 || b % a == 0)
    std::cout << "Multiples\n";
  else
    std::cout << "No Multiples\n";
  return 0;
}
