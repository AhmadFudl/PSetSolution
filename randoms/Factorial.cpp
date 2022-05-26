#include <iostream>
int main() {
  int t; std::cin >> t;
  while (t--) {
    long long input; std::cin >> input;
    int temp = 5, output = 0;
    while (input % temp != input) {
      output += input / temp;
      temp *= 5;
    }
    std::cout << output << std::endl;
  }
  return 0;
}
