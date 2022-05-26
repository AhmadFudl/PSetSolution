#include <iostream>
int main() {
  int num; std::cin >> num;
  bool prime = true;
  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0)
      prime = false;
  std::cout << (prime ? "YES\n" : "NO\n");
  return 0;
}
