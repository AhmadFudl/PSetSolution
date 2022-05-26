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

int main() {
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	//ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [X]
	int fs[200001] = {0};
	int n, e = INT_MIN, b = INT_MAX;
	cin >> n;
	int buffer[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++) {
			int sum = buffer[i]+buffer[j];
			fs[sum]++;
			if (sum > e) e = sum;
			if (sum < b) b = sum;
		}
	int out = INT_MIN;
	for (int i = b; i <= e; i++)
		if (out < fs[i])
			out = fs[i];
	puti(out);
	return 0;
}
