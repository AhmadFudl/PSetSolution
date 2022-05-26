#include <iostream>
#include <string>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

inline void shift(int*, int, int);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n, x;
	cin >> n >> x;
	x %= n;
	int *buffer = new int[n];
	for (int i = x; i < n; i++)
		cin >> buffer[i];
	for (int i = 0; i < x; i++)
		cin >> buffer[i];
	//shift(buffer, n, x);
	for (int i = 0; i < n-1; i++)
		cout << buffer[i] << " ";
	puti(buffer[n-1]);
	delete [] buffer;
	return 0;
}

inline void shift(int *buffer, int n, int x) {
	if (x % n == 0) return;
	else x %= n;
	int temp[x];
	for (int i = 0; i < n-x; i++)
		temp[i] = buffer[i];
	for (int i = n-x; i < n; i++)
		buffer[i-n+x] = buffer[i];
	for (int i = x; i < n; i++)
		buffer[i] = temp[i-x];
}
