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
#define DEBUG

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	string a[3];
	a[0] = "ROPA";
	a[1] = "YOGA";
	a[2] = "BPGA";
	int t; cin >> t;
	while (t--) {
		int n, out = 0; cin >> n;
		string s; cin >> s;
		for (int i = 0; i < n;)
			if (a[0].find(s[i]) != string::npos) {
				while (a[0].find(s[i]) != string::npos && i < n)
					i++;
				out++;
			}
			else i++;
		for (int i = 0; i < n;)
			if (a[1].find(s[i]) != string::npos) {
				while (a[1].find(s[i]) != string::npos && i < n)
					i++;
				out++;
			}
			else i++;
		for (int i = 0; i < n;)
			if (a[2].find(s[i]) != string::npos) {
				while (a[2].find(s[i]) != string::npos && i < n)
					i++;
				out++;
			}
			else i++;
		cout << out << endl;
	}
	return 0;
}
