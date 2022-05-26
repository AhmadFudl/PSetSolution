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
		int buffer[n+1], ss[n+2];
		buffer[0] = 0;
		for (int i = 2; i < n+1; i++) {
			cin >> buffer[i];
		}
		for (int i = 1; i < n+1; i++) {
			buffer[i] += buffer[i-1];
		}
		ss[n+1] = 0;
		for (int i = n; i >= 0; i--) {
			buffer[i] += buffer[i+1];
		}
		long long a, b;
		a = b = 0;
		int out = 0;
		for (int i = 1, j = n; j >= 0 && j != i && i < n+1; i++) {
			a = buffer[i] - buffer[i-1];
			if (a > b) {
				j--;
			} else if ( b >= a) {
				i++;
			}
			if (a == b) out = std::max(n+1-j + i-0, out);
		}
		cout << out << endl;
	}
	return 0;
}
