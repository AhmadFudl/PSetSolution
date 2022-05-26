#include <iostream>
void print(int a) {
  while (a--) std::putchar('*');
  std::putchar('\n');
}
int main() {
  int a;
  std::cin >> a;
  for (int i = 1; i <= a; i++)
    print(i);
  return 0;
}
