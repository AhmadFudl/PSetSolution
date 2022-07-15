#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#ifndef ussio
	#define puti(x) printf("%d\n", x)
	#define putl(x) printf("%ld\n", x)
	#define putf(x) printf("%f\n", x)
	#define putd(x) printf("%lf\n", x)
	#define putll(x) printf("%lld\n", x)
	#define putlf(x) printf("%Lf\n", x)
	#define put std::putchar
	#define get std::getchar
#endif
#define endl '\n'
#define A "START38"
#define B "LTIME108"

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int t; cin >> t;
	while (t--) {
		int n, out = 0; cin >> n;
		int buffer[n];
		for (int i = 0; i < n; i++) cin >> buffer[i];
		for (int i = 0; i < n-1; i++) {
			while (buffer[i] == buffer[i+1] && i < n-1) i++, out++;
		}
		cout << n - out << endl;
	}
	return 0;
}
