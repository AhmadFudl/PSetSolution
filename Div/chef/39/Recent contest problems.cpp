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
		int n; cin >> n;
		int a, b;
		a = b = 0;
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			if (s == A) a++;
			else b++;
		}
		cout << a << " " << b << endl;
	}
	return 0;
}
