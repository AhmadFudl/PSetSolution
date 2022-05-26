#include <algorithm>
#include <iostream>
int main() {
  int num[3], temp[3];
  for (int i = 0; i < 3; i++) {
    std::cin >> num[i];
    temp[i] = num[i];
  }
  std::sort(temp, temp+3);
  for (int i = 0; i < 3; i++)
    std::cout << temp[i] << std::endl;
  std::cout << std::endl;
  for (int i = 0; i < 3; i++)
    std::cout << num[i] << std::endl;
}
