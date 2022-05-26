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
		int sum1 = 0, sum2 = 0;
		string ch;
		cin >> ch;
		sum1 += ch[0] -'0';
		sum1 += ch[1] -'0';
		sum1 += ch[2] -'0';
		sum2 += ch[3] -'0';
		sum2 += ch[4] -'0';
		sum2 += ch[5] -'0';
		if (sum1 == sum2) puts("YES");
		else puts("NO");
	}
	return 0;
}
