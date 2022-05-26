#include <iostream>
#include <map>
int main() {
  std::map<int, bool> input;
  for (int i = 0; i < 4; i++) {
    int temp; std::cin >> temp;
    input[temp] = true;
  }
  std::cout << 4 - input.size() << "\n";
}
