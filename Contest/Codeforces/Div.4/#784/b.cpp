#include <climits>
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

int main() {
	#ifndef ONLINE_JUDGE
	freopen("in.io", "r", stdin);
	#endif
	//ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [ ]
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int f[n+1];
		bool pass = false;
		std::memset(f, 0, sizeof(f));
		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			f[temp]++;
			if (f[temp] >= 3 && !pass) {
				cout << temp << endl;
				f[temp] = INT_MIN;
				pass = true;
			}
		}
		if (!pass)
			cout << -1 << endl;
	}
	return 0;
}
