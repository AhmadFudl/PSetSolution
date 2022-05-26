#include <iostream>
using namespace std;
int main() {
  int n; cin >> n;
  char buffer[n];
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += buffer[i] - 48;
  }
  return 0;
}
