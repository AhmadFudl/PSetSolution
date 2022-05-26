#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  long long sum = 0;
  int n, temp; cin >> n;
  for (int i = 0; i <= n-1; i++)
    cin >> temp, sum += temp;
  cout << std::abs(sum) << std::endl;
  return 0;
}
