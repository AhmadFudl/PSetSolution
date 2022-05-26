#include <cstring>
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
	// TODO(Fudl): solve [X]
	string s;
	cin >> s;
	int m, l, r, pf[s.size()+1];
	std::memset(pf, 0, sizeof(pf));
	for (int i = 0; i < s.size(); i++)
		pf[i] += (i == 0 ? 0 : pf[i-1]) + (s[i] == s[i+1]);
	cin >> m;
	while (m--) {
		cin >> l >> r;
		r--;
		l--;
		cout << pf[r-1] - (l == 0 ? 0 : pf[l-1]) << endl;
	}
	return 0;
}
