#include <functional>
#include <iostream>
#include <string>
#include <algorithm>

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
#define ln 1001

int main() {
	#ifndef ONLINE_JUDGE
	freopen("in.io", "r", stdin);
	#endif
	//ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [X]
	int n, m, tc = 0, ns = 0, min = 0, max = 0;
	cin >> n >> m;
	int plane[m], f[ln] = {0};
	for (int i = 0; i < m; i++) {
		cin >> plane[i];
		f[plane[i]]++;
		tc += plane[i] * (plane[i] + 1) / 2;
		ns += plane[i];
	}
	//cout << ns << endl;
	//cout << tc << endl;
	//if (ns == m) return cout << tc << " " << tc << endl, 0;
	std::sort(plane, plane + m);

	int temp = n,b = 1;
	for (int i = 0; i < m && temp > 0; i++) {
		if (plane[i] > temp)
			b = plane[i] - temp + 1;
		min += (plane[i] * (plane[i] + 1) / 2) - ((b-1) * b / 2);
		temp -= plane[i];
	}

	temp = n;
	for (int i = 1000; i >= 1 && temp > 0; i--) {
		if (f[i] >= temp) max += i * std::min(f[i], temp);
		else max += i * f[i];
		temp -= f[i];
		f[i-1]+= f[i];
	}
	cout << max << " " << min << endl;
	return 0;
}
 
