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
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if (x >= a)
			x -= a;
		else
			x = 0;
		if (y >= b)
			y -= b;
		else
			y = 0;
		if (x+y <= c)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
