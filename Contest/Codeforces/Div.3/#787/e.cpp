#include <algorithm>
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
		int n, k; cin >> n >> k;
		char a[n];
		int af[26];
		char ch;
		std::memset(af, 0, sizeof(af));
		cin >> a[0];
		ch = a[0];
		for (int i = 1; i < n; i++) {
			cin >> a[i];
			if (a[i]-ch <= k)
				if (a[i] > ch)
					ch = a[i];
		}
		//cout << ch << endl;
		for (char i = ch; i > 'a' && k > 0; i--) {
			af[i-'a'] = std::min(k, (i-'a'));
			k--;
		}
		for (int i = 0; i < n; i++)
			put(a[i]-af[a[i]-'a']);
		put(endl);
	}
	return 0;
}
