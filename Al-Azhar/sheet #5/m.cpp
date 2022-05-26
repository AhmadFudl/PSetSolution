#include <cstring>
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

inline int dis(int*, int);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n;
	cin >> n;
	int* buffer = new int[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	puti(dis(buffer, n));
	delete [] buffer;
	return 0;
}

inline int dis(int* a, int n) {
	bool fn[1001], fp[1001];
	std::memset(fn, 0, sizeof(fn));
	std::memset(fp, 0, sizeof(fp));
	int out = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) fp[a[i]] = true;
		else fn[-1*a[i]] = true;
	}
	for (int i = 0; i < 1001; i++)
		out += fn[i] + fp[i];
	return out;
}
