#include <climits>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

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


int lcs(string in, string a, int m, int n, vector<vector<int> > &dp) {
	if (m == 0 || n == 0) return 0;
	if (in[m-1] == a[n-1]) return dp[m][n] = 1 + lcs(in, a, m-1, n-1, dp);
	if (dp[m][n] != -1) return dp[m][n];
	return dp[m][n] = max(lcs(in, a, m-1, n, dp),lcs(in, a, m, n-1, dp));
}

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	string in, a = "abcdefghijklmnopqrstuvwxyz";
	cin >> in;
	#ifdef DEBUG
		cout << in << endl;
	#endif
	vector<vector<int> > dp(in.size()+1, vector<int>(27, -1));
	cout << 26 - lcs(in, a, in.size(), 26, dp) << endl;
	return 0;
}
