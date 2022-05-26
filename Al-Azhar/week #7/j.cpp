#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

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
	//if (s.find('b') == string::npos) return puti(0), 0;
	int end = s.size();
	int bf[end+1], af[end+1], cmax = 0, out = 0;
	bf[0] = af[0] = 0;
	for (int i = 1; i <= end; i++)
		af[i] = (s[i-1] == 'a') + af[i-1],
		bf[i] = (s[i-1] == 'b') + bf[i-1];
	for (int i = 1; i <= end; i++) {
		for (int j = i; j <= end; j++) {
			cmax = bf[j] - bf[i-1] + af[end] - af[j-1] + af[i-1];
			out = std::max(out, cmax);
		}
	}
	puti(out);
	return 0;
}
