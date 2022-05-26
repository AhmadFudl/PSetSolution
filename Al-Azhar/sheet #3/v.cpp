#include <cstring>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n, m, temp; cin >> n >> m;
  int freq[m+1];
  for (int i = 0; i <= m; i++)
    freq[i] = 0;
  while (n--) {
    cin >> temp;
    freq[temp]++;
  }
  for (int i = 1; i <= m; i++)
    cout << freq[i] << std::endl;
  return 0;
}
