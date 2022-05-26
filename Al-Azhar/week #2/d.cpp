#include <iostream>
#include <stack>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int nozero(int a) {
  int value = 0;
  std::stack<int> digits;
  while (a != 0) {
    if (a % 10 == 0)
      a/=10;
    else
     digits.push(a%10 + 48), a/=10;
  }
  while (!digits.empty()) {
    value*=10;
    value+=(int)digits.top()-48;
    digits.pop();
  }
  return value;
}

int main() {
  int a, b, sum;
  cin >> a >> b;
  sum = a + b;
  if (nozero(a) + nozero(b) == nozero(sum))
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
