#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, temp; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp > 0)
      buffer[i] = 1;
    else if (temp < 0)
      buffer[i] = 2;
    else
      buffer[i] = 0;
  }
  for (int i = 0; i < n-1; i++)
    cout << buffer[i] << ' ';
  cout << buffer[n-1] << std::endl;
  return 0;
}
