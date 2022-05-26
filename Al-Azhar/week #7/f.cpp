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
	int n, k, sum = 0, max = 0;
	cin >> n >> k;
	int buffer[n], ab[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	for (int i = 0; i < n; i++) {
		cin >> ab[i];
		if (ab[i]) sum += buffer[i], buffer[i] = 0;
	}
	for (int i = 0; i < n; i++)
		buffer[i] += (i == 0) ? 0 : buffer[i-1];
	for (int i = 0; i <= n-k; i++) {
		int temp = buffer[i+k-1] - (i == 0 ? 0 : buffer[i-1]); 
		max = std::max(max, temp);
	}
	cout << sum + max << endl;
	return 0;
}
