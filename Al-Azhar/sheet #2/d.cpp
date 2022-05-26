#include <iostream>
int main() {
  int pass; std::cin >> pass;
  while (pass != 1999) {
    std::cout << "Wrong\n";
    std::cin >> pass;
  }
    std::cout << "Correct\n";
  return 0;
}
