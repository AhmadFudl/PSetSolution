#include <iostream>
void print(char ch, int n) {
  while (n--) std::cout << ch;
  std::cout << '\n';
}
int main() {
  char ch;
  int n, temp;
  std::cin >> ch >> n;
  for (int i = 0; i <= n-1; i++) {
    std::cin >> temp;
    print(ch, temp);
  }
  return 0;
}
