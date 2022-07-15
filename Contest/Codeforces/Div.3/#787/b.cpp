#include <algorithm>
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
	//#ifndef ONLINE_JUDGE
	//freopen("in.io", "r", stdin);
	//#endif
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [ ]
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int buffer[n];
		for (int i = 0; i < n; i++)
			cin >> buffer[i];
		int out = 0;
		bool pass = true;
		std::reverse(buffer, buffer+n);
		for (int i = 1; i < n; i++) {
			while (buffer[i-1] <= buffer[i] && buffer[i] != 0) {
				buffer[i]/=2;
				out++;
			}
			if (buffer[i] == 0 && buffer[i-1] == 0 && buffer[i] == buffer[i-1]) {
				pass = false;
				break;
			}
		}
		if (pass) cout << out << '\n';
		else      cout << -1 << '\n';
	}
	return 0;
}
