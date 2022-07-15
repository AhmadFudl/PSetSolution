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
		string s;
		cin >> s;
		int zero = 0, q = 0, one = 0;
		int out = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') { out = 1; zero = 0; q = 0;}
			else if (s[i] == '0' && zero != 1) { out++; zero++; q = 0; }
			else if (s[i] == '?' && q != 1 && zero != 1) { out++; }
			//cout << out << " " << s[i] << endl;
		}
		//cout << "----------" << endl;
		puti(out);
	}
	return 0;
}
