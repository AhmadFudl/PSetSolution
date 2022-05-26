#include <cctype>
#include <iostream>
int main() {
  char a; 
  std::cin >> a;
  if (std::isdigit(a))
    std::cout << "IS DIGIT\n";
  else
    std::cout << (std::isupper(a) ? "ALPHA\nIS CAPITAL\n" : "ALPHA\nIS SMALL\n");;
  return 0;
}
