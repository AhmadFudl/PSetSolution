#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
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
	int n, current_max = 0, max = INT_MIN;
	cin >> n;
	bool pair[n+1];
	std::memset(pair, 1, sizeof(pair));
	for (int i = 1; i <= 2*n; i++) {
		int temp;
		cin >> temp;
		pair[temp] ? current_max++ : current_max--;
		pair[temp] = false;
		max = std::max(current_max, max);
	}
	cout << max << endl;
	return 0;
}
