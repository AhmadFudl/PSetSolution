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
		int n, pos, neg; pos = neg = 0; cin >> n;
		int buffer[n];
		bool pass = true;
		for (int i = 0; i < n; i++) {
			cin >> buffer[i];
			pos += buffer[i] > 0;
			neg += buffer[i] < 0;
		}
		for (int i = 0; i < neg-1; i++) {
			if (std::abs(buffer[i]) < std::abs(buffer[i+1]))
				pass = false;
			//cout << abs(buffer[i]) << " " << abs(buffer[i+1]) << endl;
		}
		//cout << "______________\n";
		for (int i = neg; i < n-1; i++) {
			if (std::abs(buffer[i]) > std::abs(buffer[i+1]))
				pass = false;
			//cout << abs(buffer[i]) << " " << abs(buffer[i+1]) << endl;
		}
		if (pass) puts("YES");
		else puts("NO");
	}
	return 0;
}
