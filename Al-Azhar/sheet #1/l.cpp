#include <iostream>
int main() {
  std::string a, b;
  std::cin >> a >> a;
  std::cin >> b >> b;
  std::cout << (a.compare(b) == 0 ? "ARE Brothers\n" : "NOT\n");
  return 0;
}
