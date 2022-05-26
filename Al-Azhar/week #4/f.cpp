#include <algorithm>
#include <iostream>

#define put std::putchar
#define USstdio std::cin.tie(0), std::cin.sync_with_stdio(0)
using std::cin;
using std::cout;

int main() {
  USstdio;
  int n; cin >> n;
  long long buffer[n]; 
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  long long sum, max; 
  sum = max = buffer[0];
  for (int i = 1; i < n; i++) {
    sum = std::max(sum + buffer[i], buffer[i]);
    max = std::max(max, sum);
  }
  cout << max << std::endl;
  return 0;
}
