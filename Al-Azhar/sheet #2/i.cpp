#include <iostream>
int main() {
  std::string n; std::cin >> n;
  bool bald = true, pass = true;
  for (int i = n.size()-1; i >= 0; i--) {
    if (n[i] != n[n.size()-1-i] && bald)
      bald = false;
    if (n[i] == '0' && pass)
      continue;
    else {
      pass = false;
      std::cout << n[i];
    }
  }
  std::cout << (bald ? "\nYES\n" : "\nNO\n");
  return 0;
}
