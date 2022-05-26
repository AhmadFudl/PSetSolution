#include <iostream>
int main() {
  char a; std::cin >> a;
  std::cout << (std::isupper(a) ? (char)std::tolower(a) : (char)std::toupper(a)) << '\n';
  return 0;
}
