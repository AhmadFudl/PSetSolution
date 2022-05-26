#include <climits>
#include <cstring>
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
	// TODO(Fudl): solve [X]
	int n, k, out = 0, min = 0;
	cin >> n >> k;
	int buffer[n], f[k];
	std::memset(f, 0, sizeof(f));
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	for (int i = 0; i < n; i++) {
		if (buffer[i] < k) f[k - buffer[i]]++;
		else (buffer[i] % k) ? f[k - (buffer[i] % k)]++ : f[0]++;
	}
	//for (int i = 0; i < k; i++)
	//	cout << i << " " << f[i] << endl;
	out += (f[0] % 2) ? f[0]-1 : f[0];
	for (int i = 1, j = k-1; i <= k/2; j--,i++) {
		min = std::min(f[i], f[j]);
		if (i == j) out += ((min % 2) ? min-1 : min);
		else out += 2 * (min);
	}
	puti(out);
	return 0;
}
