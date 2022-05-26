#include <algorithm>
#include <cmath>
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
#define MOD 1000000007

std::string vowel = "aeiou";

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long out = 1;
		string s; cin >> s;
		long long af[26];
		for (int i = 0; i < 26; i++) af[i] = 1;
		for (int i = 0; i < 26; i++) {
			int a[5] = {0};
			for (int j = 0; j < 5; j++)
				a[j] = abs(i - (vowel[j]-'a'));
			sort(a, a+5);
			if (a[0] == a[1]) af[i]++;
			if (a[0] == a[2]) af[i]++;
			if (a[0] == a[3]) af[i]++;
			if (a[0] == a[4]) af[i]++;
		}
		for (int i = 0; i < n; i++)
			out = (out * (af[s[i]-'a'] % MOD)) % MOD;
		cout << out << endl;
	}
	return 0;
}
