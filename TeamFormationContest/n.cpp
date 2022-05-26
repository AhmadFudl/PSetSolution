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

long long fact(int n) { 
	if(n == 0) return 1;
	else return n * fact(n - 1);
}

int main() {
	ussio;
	//#ifndef ONLINE_JUDGE
	//	freopen("", "r", stdin);
	//#endif
	#ifdef ONLINE_JUDGE
		freopen("popcorn.in", "r", stdin);
	#endif
	long long t; cin >> t;
	while (t--) {
		long long n, m; cin >> n >> m;
		cout << fact(n)/ (fact(m)*fact(n-m)) << endl;
	}
	return 0;
}
