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
	int a, b, c, d, e, f, x;
	cin >> b >> a >> c >> e >> d >> f >> x;
	int A, B;
	A = B = 0;
	A += x/(b+c)*a*b;
	A += a*(std::min(x % (b+c) , b));
	B += x/(e+f)*d*e;
	B += d*(std::min(x % (e+f) , e));
	if (A > B)
		puts("Takahashi");
	else if (B > A)
		puts("Aoki");
	else
		puts("Draw");
	return 0;
}
