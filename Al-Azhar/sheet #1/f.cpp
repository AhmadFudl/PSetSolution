#include <cstdio>
#include <iostream>
int main() {
  char current = '0', NLast, MLast;
  bool pass = true;
  while(true) {
    current = std::getchar();
    if (current == '\n')
      break;
    if (current == ' ')
      pass = false;
    if (pass)
      NLast = current;
    else
      MLast = current;
  }
  std::cout << NLast + MLast - 96 << '\n';
  return 0;
}
