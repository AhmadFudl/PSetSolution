#include <cstdio>
#include <cstdlib>
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
#define ONLINE_JUDGE

long long range_PSum(long long ps[], int l, int r, int sz);
long long range_SSum(long long ss[], int l, int r, int sz);
void PS(int a[] ,long long ps[], int sz);
void SS(int a[] ,long long ss[], int sz);
bool clamp(int low, int high, int sz);

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	using namespace std;

	int n = 0;
	int a[n];
	long long ps[n], ss[n];
	for (int i = 0; i < n; i++) a[i] = rand() % 10 + 1;
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//cout << a[0] + a[1] + a[2] << endl;
	//cout << a[7] + a[8] + a[9] << endl;

	cout << "error\n";
	PS(a, ps, n);
	for (int i = 0; i < n; i++) cout << range_PSum(ps, 0, i) << ' ';
	cout << endl;
	//cout << ps[2] << endl;

	SS(a, ss, n);
	for (int i = 0; i < n; i++) cout << range_SSum(ss, i, 9, 10) << ' ';
	cout << endl;
	cout << range_SSum(ss, 7, n, n) << endl;

	cout << "PS\n";
	while (true)
	{
		int l, r;
		cin >> l >> r;
		if (l < 0 || r < 0) break;
		cout << range_PSum(ps, l, r, n) << endl;
	}

	cout << "SS\n";
	while (true)
	{
		int l, r;
		cin >> l >> r;
		if (l < 0 || r < 0) break;
		cout << range_SSum(ss, l, r, n) << endl;
	}
	return 0;
}
