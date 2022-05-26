#include <iostream>
int main() {
  long long a, b;
  char d;
  std::cin >> a >> d >> b;
  switch (d) {
    case '+':
      a += b;
      break;
    case '-':
      a -= b;
      break;
    case '*':
      a *= b;
      break;
  }
  std::cin >> d >> b;
  if (a == b)
    std::cout << "Yes\n";
  else
    std::cout << a << "\n";
  return 0;
}
