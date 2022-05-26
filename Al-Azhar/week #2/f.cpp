#include <algorithm>
#include <iostream>
#include <vector>

#define put std::putchar
using std::cin;
using std::cout;

struct segment {
  int odd = 0;
  int even = 0;
  int value;
};

int main() {
  int n, b, cut = 0, sum = 0;
  cin >> n >> b;
  segment buffer[n+1];
  std::vector<int> cut_gas;
  buffer[0].even = buffer[0].odd = 0;
  for (int i = 1; i <= n; i++) {
    cin >> buffer[i].value;
    if (buffer[i].value % 2 == 0){
      buffer[i].odd = buffer[i-1].odd;
      buffer[i].even = buffer[i-1].even + 1;
    }
    else {
      buffer[i].even = buffer[i-1].even;
      buffer[i].odd = buffer[i-1].odd + 1;
    }
  }
  for (int i = 2; i <= n-2; i+=2) {
    if (buffer[i].odd == buffer[i].even)
      cut_gas.push_back(abs(buffer[i].value - buffer[i+1].value));
  }
  std::sort(cut_gas.begin(), cut_gas.end());
  for (int i = 0; i < cut_gas.size(); i++)
    if (cut_gas[i] + sum <= b)
      cut++, sum+=cut_gas[i];
  cout << cut << '\n';
  return 0;
}
