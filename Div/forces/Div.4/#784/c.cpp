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
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int buffer[n];
		bool odd1, even1, odd2, even2;
		odd1 = even1 = even2 = odd2 = false;
		for (int i = 0; i < n; i++) {
			cin >> buffer[i];
		}
		for (int i = 0; i < n; i+=2) {
			if (buffer[i] % 2 == 0 && !even1)
				even1 = true;
			else if (buffer[i] % 2 == 1 && !odd1) {
					odd1 = true;
			}
		}
		for (int i = 1; i < n; i+=2) {
			if (buffer[i] % 2 == 0 && !even2)
				even2 = true;
			else if (buffer[i] % 2 == 1 && !odd2) {
					odd2 = true;
			}
		}
		if (odd1 == true && even1 == true) {
			cout << "NO\n";
			continue;
		}
		if (odd2 == true && even2 == true) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}
	return 0;
}
