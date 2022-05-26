#include <iostream>

#define put std::putchar
#define get std::getchar
#define USstdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  USstdio;
  int n; cin >> n;
  cout << "0 0 " << n << std::endl;
	return 0;
}
