#include <iostream>
#include <string>
#include <algorithm>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n;
	cin >> n;
	int buffer[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	int *pend = std::remove(buffer, buffer+n, 0);
	int i;
	for (i = 0; i < pend-buffer; i++)
		cout << buffer[i] << " ";
	for (; i < n - 1; i++)
		cout << 0 << " ";
	puts("0");
	return 0;
}
