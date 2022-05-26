#include <algorithm>
#include <iostream>
#include <utility>
int main() {
  int n, ans = 0; std::cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    std::cin >> buffer[i];
  auto result = std::minmax_element(buffer, buffer+n);
  int value = *result.first + *result.second;
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1 ; j < n; j++) {
      if (buffer[i] + buffer[j] == value)
        ans++;
    }
  }
  std::cout << ans << std::endl;
  return 0;
}
