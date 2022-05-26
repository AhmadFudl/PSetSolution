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
	int n, k, out = 0; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		bool f[26] = {0};
		int a = 0;
		for (int j = 0; j < s.size(); j++) {
			a += !f[s[i]-'a'];
			f[s[i]-'a'] = true;
		}
	}
	puti(out);
	return 0;
}
