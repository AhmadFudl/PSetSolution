#include <iostream>
#include <climits>
int main() {
  int num; std::cin >> num;
  int max = INT_MIN, temp;
  for (int i = 0; i < num; i++) {
    std::cin >> temp;
    max = (temp > max ? temp : max);
  }
  std::cout << max << '\n';
  return 0;
}
