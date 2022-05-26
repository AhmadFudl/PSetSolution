#include <climits>
#include <iostream>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int n, min = INT_MAX;
  cin >> n;
  int h[n];
  for (int i = 0; i <= n-1; i++){
    cin >> h[i];
    h[i] <= min && (min=h[i]);
  }
  for (int i = 0; i <= n-1; i++)
    cout << (h[i] & 1) << ' ';
  put('\n');
  for (int i = 0; i <= n-1; i++)
    cout << h[i] - min << ' ';
  put('\n');
  for (int i = 0; i <= n-2; i++) {
    h[i] == h[i+1] && (h[i]++, h[i+1]++, i++);
  }
  for (int i = 0; i <= n-1; i++)
    cout << h[i] - min << ' ';
  put('\n');
  return 0;
}
