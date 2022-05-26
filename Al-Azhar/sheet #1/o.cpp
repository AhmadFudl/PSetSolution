#include <iostream>
int main() {
  int Fopd, Sopd;
  char opr;
  std::cin >> Fopd >> opr >> Sopd;
  switch (opr) {
    case '+':
      std::cout << Fopd + Sopd << std::endl;
      break;
    case '-':
      std::cout << Fopd - Sopd << std::endl;
      break;
    case '*':
      std::cout << Fopd * Sopd << std::endl;
      break;
    case '/':
      std::cout << Fopd / Sopd << std::endl;
      break;
  }
  return 0;
}
