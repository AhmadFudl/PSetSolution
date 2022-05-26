#include <iostream>
#include <stack>
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
//#define DEBUG

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	unsigned long long t; cin >> t;
	while (t--) {
		unsigned long long k; cin >> k;
		stack<string> fin;
		stack<string> bug;
		while (k >= 1) {
			#ifndef DEBUG
				bug.push(to_string(k));
			#endif
			if (k == 1) {
				cout << 2;
				while (!fin.empty()) { cout << fin.top(); fin.pop(); }
				cout << endl;
				break;
			}
			else if (k % 2 != 0) { cout << "(2*"; fin.push(")"); k--; }
			else { cout << "("; fin.push(")^2"); k /= 2;}
		}
		#ifdef DEBUG
			while (!bug.empty()) { cout << bug.top() << endl; bug.pop(); }
		#endif
	}
	return 0;
}
