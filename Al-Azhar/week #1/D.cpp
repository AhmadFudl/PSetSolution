#include <algorithm>
#include <iostream>
int main() {
  int n, d, ans = 0; std::cin >> n >> d;
  int buffer[n];
  for (int i = 0; i < n; i++)
    std::cin >> buffer[i];
  std::sort(buffer, buffer+n);
  for (int i = 0 ; i < n; i++) {
    int temp = 0;
    for (int j = i+1; j < n && buffer[j] - buffer[i] <= d; j++) {
      temp++;
    }
    ans += temp*2;
  }
  std::cout << ans << std::endl;
  return 0;
}
