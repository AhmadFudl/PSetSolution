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
//#define DEBUG

using namespace std;

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int fn[10] = {0};
	string n; cin >> n;
	bool pass = false;
	char f, m, l;
	#ifdef DEBUG
		cout << n << endl;
	#endif
	for (int i = 0; i < n.size(); i++) fn[n[i]-'0']++;
	for (int i = 0; i < 10; i++) {
		if (fn[i] == 3) { f = m = l = '0'+ i; pass = true; break; }
		else if (fn[i] == 2) { f = l = '0' + i; pass = true; }
		else if (fn[i] == 1) { m = '0' + i; }
	}
	if (pass) cout << f << m << l << endl;
	else cout << "Impossible\n";
	return 0;
}
