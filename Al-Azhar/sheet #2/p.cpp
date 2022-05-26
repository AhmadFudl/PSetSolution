#include <iostream>
void print(int a) {
  while (a--) std::putchar('*');
  std::putchar('\n');
}
int main() {
  int a;
  std::cin >> a;
  for (int i = a; i >= 0; i--)
    print(i);
  return 0;
}
