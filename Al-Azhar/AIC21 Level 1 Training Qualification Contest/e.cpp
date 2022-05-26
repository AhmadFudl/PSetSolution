#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, temp; cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp == 1 || temp == 3) {
      puts("Bad");
      return 0;
    }
  }
  puts("Good");
  return 0;
}
