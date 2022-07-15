#include <algorithm>
#include <climits>
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

struct board {
	long long value, sum, sum2;
};

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
		int n, m; cin >> n >> m;
		board a[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j].value;

		for (int i = 0; i < n; i++) {
			int k = i, l = 0;
			long long sum = 0;
			//cout << k << " " << l << endl;
			while (k < n && l < m) {
				//cout << '\t' << k << " " << l << endl;
				sum += a[k][l].value;
				k++; l++;
			}
			//cout << sum << endl;
			k = i; l = 0;
			while (k < n && l < m) {
				a[k][l].sum = sum; 
				k++; l++;
			}
			sum = 0;
		}

		for (int i = 0; i < m; i++) {
			int k = 0, l = i;
			long long sum = 0;
			//cout << k << " " << l << endl;
			while (k < n && l < m) {
				//cout << '\t' << k << " " << l << endl;
				sum += a[k][l].value;
				k++; l++;
			}
			//cout << sum << endl;
			k = 0; l = i;
			while (k < n && l < m) {
				a[k][l].sum = sum; 
				k++; l++;
			}
			sum = 0;
		}

		for (int i = 0; i < m; i++) {
			int k = 0, l = i;
			long long sum = 0;
			//cout << k << " " << l << endl;
			while (k < n && l >= 0) {
				//cout << '\t' << k << " " << l << endl;
				sum += a[k][l].value;
				k++; l--;
			}
			//cout << sum << endl;
			k = 0; l = i;
			while (k < n && l >= 0) {
				a[k][l].sum2 = sum; 
				k++; l--;
			}
			sum = 0;
		}

		for (int i = 0; i < n; i++) {
			int k = i, l = m-1;
			long long sum = 0;
			//cout << k << " " << l << endl;
			while (k < n && l >= 0) {
				//cout << '\t' << k << " " << l << endl;
				sum += a[k][l].value;
				k++; l--;
			}
			//cout << sum << endl;
			k = i; l = m-1;
			while (k < n && l >= 0) {
				a[k][l].sum2 = sum; 
				k++; l--;
			}
			sum = 0;
		}

		long long max = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				max = std::max(a[i][j].sum + a[i][j].sum2 - a[i][j].value, max);
			}
		}
		putll(max);
	}
	return 0;
}
		//for (int i = 0; i < n; i++) {
		//	for (int j = 0; j < m; j++)
		//		cout << a[i][j].sum2 << " ";
		//	cout << endl;
		//}
