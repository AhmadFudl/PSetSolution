#include <iostream>

#define put std::putchar
#define get std::getchar
#define USstdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
  USstdio;
	using std::cin;
	using std::cout;
  int n; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  int max = buffer[n-1];
  buffer[n-1] = 0;
  for (int i = n-2; i >= 0; i--) {
    if (buffer[i] > max) {
      max = buffer[i];
      buffer[i] = 0;
    }
    else
      buffer[i] = max - buffer[i] + 1;
  }
  for (int i = 0; i < n-1; i++)
    cout << buffer[i] << " ";
  cout << buffer[n-1] << std::endl;
	return 0;
}
