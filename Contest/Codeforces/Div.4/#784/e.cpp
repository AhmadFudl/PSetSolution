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
#define ln ('k'-'a' + 1)

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
		long long f[ln][ln];
		long long out = 0;
		for (int i = 0; i < ln; i++)
			for (int j = 0; j < ln; j++)
				f[i][j] = 0;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			f[s[0]-'a'][s[1]-'a']++;
		}
		for (int i = 0; i < ln; i++) {
			for (int j = 0; j < ln; j++) {
				//cout << "))))))))))))))\n";
				//if (f[i][j]) cout << (char)(i+'a') << (char)(j+'a') << " " << f[i][j] << endl;
				for (int k = 0; k < ln; k++) {
					//if (f[k][j]) cout << (char)(k+'a') << (char)(j+'a') << " " << f[k][j] << endl;
					if (k == i)
						continue;
					out += f[i][j] * f[k][j];
				}
				//cout << endl;
				for (int k = 0; k < ln; k++) {
					//if (f[i][k]) cout << (char)(i+'a') << (char)(k+'a') << " " << f[i][k] << endl;
					if (k == j)
						continue;
					out += f[i][j] * f[i][k];
				}
				f[i][j] = 0;
			}
		}
		cout << out << endl;
		//cout << endl;
		//cout << "----------------\n";
	}
	return 0;
}
