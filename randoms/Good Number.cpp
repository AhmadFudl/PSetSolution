#include <iostream>
#include <string>
int main() {
  int n, k, output = 0; std::cin >> n >> k;
  while (n--) {
    std::string input; std::cin >> input;
    bool pass = true;
    for (int i = 0; i <= k; i++) {
      if (input.find(i + 48) == std::string::npos) {
        pass = false;
        break;
      }
    }
    output += pass;
  }
  std::cout << output << std::endl;
  return 0;
}
