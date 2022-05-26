#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>

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
	int n, k;
	double max = 0;
	cin >> n >> k;
	int temp[n];
	for (int i = 0; i < n; i++)
		cin >> temp[i], temp[i] += i == 0 ? 0 : temp[i-1];
	for (int i = 0; i <= n-k; i++) {
		for (int j = i+k-1; j < n; j++) {
			double value = temp[j] - (i == 0 ? 0 : temp[i-1]);
			value /= j-i+1;
			max = std::max(max, value);
		}
	}
	cout << std::fixed << std::setprecision(6) << max << endl;
	return 0;
}
