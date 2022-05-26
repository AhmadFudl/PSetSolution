#include <algorithm>
#include <iostream>
int main() {
  long long n; std::cin >> n;
  long long buffer[n+1], SBuffer[n+1];
  buffer[0] = SBuffer[0] = 0;
  for (long long i = 1; i <= n; i++) {
    std::cin >> buffer[i];
    SBuffer[i] = buffer[i];
  }
  std::sort(SBuffer, SBuffer+n+1);
  for (long long i = 2; i <= n; i++)
    buffer[i] += buffer[i-1];
  for (long long i = 2; i <= n; i++)
    SBuffer[i] += SBuffer[i-1];
  long long m; std::cin >> m;
  while (m--) {
    char option; std::cin >> option;
    long long l, r; std::cin >> l >> r;
    if (option == '1')
      std::cout << buffer[r] - buffer[l-1] << std::endl;
    else
      std::cout << SBuffer[r] - SBuffer[l-1] << std::endl;
  }
  return 0;
}
