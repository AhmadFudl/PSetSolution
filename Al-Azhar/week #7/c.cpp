#include <cstdio>
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
	int n;
	cin >> n;
	if (n == 1 || n > 26) return puts("Yes"), 0;
	int af[26] = {0};
	string str;
	cin >> str;
	for (int i = 0; i < n; i++) {
		af[str[i]-'a']++;
		if (af[str[i]-'a'] >= 2)
			return puts("Yes"), 0;
	}
	puts("No");
	return 0;
}
