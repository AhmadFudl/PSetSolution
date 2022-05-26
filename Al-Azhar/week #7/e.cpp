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
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

struct Out {
	int idx, value = INT_MAX;
};

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
	Out out;
	cin >> n >> k;
	int buffer[n+1];
	buffer[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> buffer[i], buffer[i] += buffer[i-1];
	for (int i = 1; i <= n-k+1; i++) {
		int temp = buffer[i+k-1] - buffer[i-1];
		if (out.value > temp)
			out.value = temp, out.idx = i;
	}
	puti(out.idx);
	return 0;
}
