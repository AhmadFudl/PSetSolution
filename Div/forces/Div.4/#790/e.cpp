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
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

bool big(long long i, long long j) {return i > j;}

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
		int n, q; cin >> n >> q;
		long long buffer[n], ps[n+1];
		ps[0] = 0;
		for (int i = 0 ; i < n; i++) cin >> buffer[i]; 
		std::sort(buffer, buffer+n, big);
		for (int i = 0; i < n; i++) ps[i+1] = ps[i] + buffer[i];
		//for (int i = 0; i < n; i++) cout << buffer[i] << " ";
		//cout << endl;
		//for (int i = 0; i < n; i++) cout << ps[i+1] << " ";
		//cout << endl;
		while (q--) {
			long long x; cin >> x;
			bool pass = false;
			long long *i = std::lower_bound(ps+1, ps+n+1, x);
			//cout << x << " " << *i << " " ;
			if (i < ps+n+1) cout << i - ps << endl;
			else cout << -1 << endl;
		}
	}
	return 0;
}
