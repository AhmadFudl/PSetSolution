#include <cstring>
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
	int prime[1000002];
	memset(prime, 0, sizeof(prime));
	for (int i = 2; i*i < 1000002; i++)
		if (prime[i] == 0)
			for (int j = i*2; j < 1000002; j += i)
				prime[j] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i < 1000002; i++) {
		prime[i] ^= 1;
		prime[i] += prime[i-1];
	}
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		cout << prime[m] - prime[n-1] << endl;
	}
	return 0;
}
