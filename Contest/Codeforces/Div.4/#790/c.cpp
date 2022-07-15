#include <algorithm>
#include <climits>
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
		int n, m;
		cin >> n >> m;
		string str[n];
		for (int i = 0; i < n; i++) cin >> str[i];
		int out = 0;
		int min = INT_MAX;
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				//cout << str[i] << " " << str[j] << endl;
				for (int k = 0; k < m; k++) {
					out += std::abs(str[j][k] - str[i][k]);
				}
				//cout << out << endl;
				min = std::min(out, min);
				out = 0;
			}
		}
		puti(min);
	}
	return 0;
}
