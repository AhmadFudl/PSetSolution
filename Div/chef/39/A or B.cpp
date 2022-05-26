#include <algorithm>
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
#define A 500
#define B 1000

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int t; cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		int a = A-2*x + B-(4*(x+y));
		int b = B-4*y + A-(2*(x+y));
		cout << max(0,max(a, b)) << endl;
	}
	return 0;
}
