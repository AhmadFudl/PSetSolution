#include <iostream>
bool lucky(int a) {
  while (a != 0) {
    if (!(a % 10 == 4 || a % 10 == 7))
      return false;
    a /= 10;
  }
  return true;
}
int main() {
  int a, b;
  std::cin >> a >> b;
  bool exist = false;
  for (int i = a; i <= b; i++)
    if (lucky(i))
      std::cout << i << ' ', exist = true;
  if (!exist)
    std::cout << "-1\n";
  else
    std::cout << '\n';
  return 0;
}
