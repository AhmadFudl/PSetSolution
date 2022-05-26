#include <iostream>
int main() {
  char a; std::cin >> a;
  std::cout << ((int)a % 2 == 0 ? "EVEN\n" : "ODD\n");
  return 0;
}
