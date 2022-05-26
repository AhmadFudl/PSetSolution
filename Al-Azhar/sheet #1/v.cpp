#include <iostream>
int main() {
  int a, b;
  char c;
  std::cin >> a >> c >> b;
  switch (c) {
    case '>':
      std::cout << (a > b ? "Right" : "Wrong") << std::endl;
      break;
    case '=':
      std::cout << (a == b ? "Right" : "Wrong") << std::endl;
      break;
    case '<':
      std::cout << (a < b ? "Right" : "Wrong") << std::endl;
      break;
  }
  return 0;
}
