#include <iostream>
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << "floor " << a << " / " << b << " = " << a / b << "\n";
  std::cout << "ceil " << a << " / " << b << " = " << (a/b) + (bool)(a%b) << '\n';
  std::cout << "round " << a << " / " << b << " = ";
  if ((int)((float)a / (float)b * 10) % 10 >= 5)
    std::cout << a / b + 1 << '\n';
  else
    std::cout << a / b << '\n';
return 0;
}
