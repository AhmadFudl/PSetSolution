#include <iostream>
#include <cmath>
int main() {
  int n; std::cin >> n;
  bool buffer[n+1];
  int limit = std::sqrt(n);
  for (int i = 0; i <= n ; i++) buffer[i] = true;
  for (int i = 2; i <= limit; i++) {
    if (buffer[i])
      for (int j = i*i; j <= n; j+=i) {
        buffer[j] = false;
    }
  }
  for (int i = 2; i <= n; i++)
    if (!buffer[i])
      continue;
    else {
      std::cout << i << ' ';
    }
  std::cout << '\n';
  return 0;
}
