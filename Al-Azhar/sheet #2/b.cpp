#include <iostream>
int main() {
  int num; std::cin >> num;
  if (num == 1)
    std::cout << "-1\n";
  else {
    for (int i = 2; i <= num; i+=2)
    std::cout << i << '\n';
  }
  return 0;
}
