#include <iostream>
#include <cmath>
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
#define PI 3.141592653589793238

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int t; cin >> t;
	while (t--) {
		double r1, r2; cin >> r1 >> r2;
		double aot = r1*(r1+r2)*0.5;
		double an = asin(r1/(r1+r2));
		cout << an << endl;
		cout << aot << endl;
		aot -= (0.5 * ((90 * (PI/180)) - sin(90 * (PI/180))) * r1*r1);
		aot -= (0.5 * (an - sin(an)) * r2*r2);
		cout << aot << endl;
	}
	return 0;
}
