#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  for (int i = n-1; i >= 1; i--)
    cout << buffer[i] << ' ';
  cout << buffer[0] << std::endl;
  return 0;
}
