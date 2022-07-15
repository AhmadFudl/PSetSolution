#include <algorithm>
#include <climits>
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
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
struct lol {
	int value, fr;
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
		int f[200001] = {0};
		int n, k; cin >> n >> k;
		int buffer[n];
		for (int i = 0; i < n; i++) cin >> buffer[i];
		std::sort(buffer, buffer+n);
		std::vector<lol> a;
		if (n == 1) {
			lol b;
			b.fr = 1;
			b.value = buffer[0];
			a.push_back(b);
		}
		for (int i = 0; i < n-1; i++) {
			int c = 1;
			lol b; b.value = buffer[i];
			while (buffer[i] == buffer[i+1] && i < n-1) {
				c++; i++;
			}
			b.fr = c;
			a.push_back(b);
			if (i == n-2) {
				b.value = buffer[n-1];
				b.fr = 1;
				a.push_back(b);
			}
		}

		int max = INT_MIN;
		bool pass = true;
		int o1 = -1, o2 = -1;
		int a1 = -1, a2 = -1;
		//cout << k << endl;
		//for (int i = 0; i < a.size(); i++)
		//	cout << '(' << a[i].value << " " << a[i].fr << ") ";
		//cout << endl;
		for (int i = 0 ; i < a.size(); i++) {
			if (a[i].fr >= k) {
				if (pass) { o1 = o2 = a[i].value; pass = false; }
				if (a[i].value-o2 <= 1) {
					o2 = a[i].value;
				}
				else {
					if (max <= o2-o1) {
						a1 = o1;
						a2 = o2;
						max = o2-o1;
					}
					o1 = o2 = a[i].value;
				}
			}
			else {
				pass = true;
				if (max <= o2-o1) {
					a1 = o1;
					a2 = o2;
					max = o2-o1;
				}
			}
		}
		if (max <= o2-o1) {
			a1 = o1;
			a2 = o2;
			max = o2-o1;
		}
		if (a1 == a2 && a1 == -1) cout << -1 << endl;
		else cout << a1 << " "<< a2 << endl;
	}
	return 0;
}
