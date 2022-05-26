#include <iostream>
int main() {
  int num, temp; std::cin >> num;
  int pos, neg, odd, even;
  pos = neg = odd = even = 0;
  while (num--) {
    std::cin >> temp;
    if (temp % 2 == 0)
      even++;
    else
      odd++;
    if (temp == 0)
      continue;
    if (temp > 0)
      pos++;
    else
      neg++;
  }
  std::cout << "Even: " << even << '\n';
  std::cout << "Odd: " << odd << '\n';
  std::cout << "Positive: " << pos << '\n';
  std::cout << "Negative: " << neg << '\n';
  return 0;
}
