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
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		int w = 0, b = 0, a = 0;
		bool A, B;
		A = B = false;
		string temp = "";
		for (int i = 0; i < n; i++) {
			if (s[i] == 'R' && !A) A = true;
			if (s[i] == 'B' && !B) B = true;
			w += s[i] == 'W';
			b += s[i] == 'B';
			a += s[i] == 'R';
			if (s[i] != s[i+1])
				temp += s[i];
		}
		s = temp;
		n = temp.size();
		if (s[n-2] == 'W' && s[n-1] == 'B') {
			cout << "no\n";
			continue;
		} else if (s[n-2] == 'W' && s[n-1] == 'R') {
			cout << "no\n";
			continue;
		} else if (s[1] == 'W' && s[0] == 'R') {
			cout << "no\n";
			continue;
		} else if (s[1] == 'W' && s[0] == 'B') {
			cout << "no\n";
			continue;
		}
		if (n <= 1 && w == 0 || n == 2 && w == 1) {
			cout << "no\n";
			continue;
		} else if (A ^ B) {
			cout << "no\n";
			continue;
		}
		bool pass = true;
		for (int i = 1; i < n-1; i++) {
			if (s[i-1] == 'W' && s[i] == 'B' && s[i+1] == 'W') {
				pass = false;
				continue;
			} else if (s[i-1] == 'W' && s[i] == 'R' && s[i+1] == 'W') {
				pass = false;
				continue;
			}
		}
		for (int i = 1; i < temp.size() - 1; i++) {
			if (temp[i-1] == 'W' && temp[i] == 'B' && temp[i+1] == 'W') {
				pass = false;
				continue;
			} else if (temp[i-1] == 'W' && temp[i] == 'R' && temp[i+1] == 'W') {
				pass = false;
				continue;
			}
		}
		if (!pass) {
			cout << "no\n";
			continue;
		}
		cout << "yes\n";
	}
	return 0;
}
