#include <cctype>
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
	string s; cin >> s;
	int f[26] = {0}, F[26] = {0};
	bool u, l, pass;
	pass = u = l = false;
	for (int i = 0; i < s.size(); i++) {
		if (std::isupper(s[i])) {
			F[s[i]-'A']++, u = true;
			if (F[s[i]-'A'] >= 2) {
				pass = true;
				continue;
			}
		}
		else {
			f[s[i]-'a']++, l = true;
			if (f[s[i]-'a'] >= 2) {
				pass = true;
				continue;
			}
		}
	}
	if (pass)        puts("No");
	else if (u && l) puts("Yes");
	else             puts("No");
	return 0;
}
