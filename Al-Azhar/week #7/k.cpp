#include <cstring>
#include <iostream>
#include <string>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define putd(x) printf("%lf\n", x)
#define putll(x) printf("%lld\n", x)
#define putlf(x) printf("%Lf\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define ln 100001

int main() {
	#ifndef ONLINE_JUDGE
	freopen("in.io", "r", stdin);
	#endif
	//ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [X]
	int n, m, l, r;
	cin >> n >> m;
	int buffer[n], f[ln], ss[n+2];
	std::memset(f, 0, sizeof(f));
	ss[n+1] = 0;
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	for (int i = n-1; i >= 0; i--)
		ss[i+1] = ss[i+2] + (++f[buffer[i]] == 1);
	for (int i = 0; i < m; i++) {
		cin >> l;
		puti(ss[l] - ss[n+1]);
	}
	return 0;
}
