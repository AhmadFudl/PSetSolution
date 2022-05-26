#include <algorithm>
#include <cstdlib>
#include <map>
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
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [ ]
	int t; cin >> t;
	while (t--) {
		long long n, x, sum = 0, rem = 0, mul = 1, sz;
		bool pass = false;
		std::map<int, int> fr;
		cin >> n >> x;
		sz = n;
		int buffer[n];
		int *p = NULL;
		for (int i = 0; i < n; i++) {
			cin >> buffer[i];
			buffer[i] -= x;
			fr[buffer[i]]++;
		}
		for (auto &i : fr) {
			if (i.second > 1 && fr[i.first * -1] > 1) { pass = true; break; }
			else if (i.first == 0) { pass = true; break; };
		}
		cout << (pass ? "YES\n" : "NO\n");
	}
	return 0;
}
