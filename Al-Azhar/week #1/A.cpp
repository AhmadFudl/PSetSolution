#include <algorithm>
#include <iostream>
#include <cmath>
int main() {
  int buffer[3]; for (int i = 0; i < 3; i++) std::cin >> buffer[i];
  std::sort(buffer, buffer+3);
  int ans = buffer[2] - buffer[1] - buffer[0] + 1;
  std::cout << (ans >= 0 ? ans:0) << std::endl;
  return 0;
}
