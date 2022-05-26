/*
* A work in progress template for CPC
*/

#include <climits>
#include <iostream>
#include <vector>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

int a[11][101][101];
int mx = INT_MIN, my = INT_MIN;

struct Star
{
	int x, y, s;
	void getin() {
		std::cin >> x >> y >> s;
	}
};


void set(bool);
void mps(int t);

void process()
{
	using namespace std;

	int n, q, c;
	cin >> n >> q >> c;
	for (int i = 0; i < n; i++) {
		int x, y, s;
		std::cin >> x >> y >> s;
		a[s][x][y]++;
	}
	for (int i = 0; i <= 10; i++)
		mps(i);
	while (q--) {
		int t, x1, y1, x2, y2, out = 0;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		for (int i = 0; i <= c; i++) {
			int brightnes = (i+t) % (c+1);
			int num = a[i][x2][y2] + a[i][x1-1][y1-1] - a[i][x1-1][y2] - a[i][x2][y1-1];
			out += brightnes * num;
		}
		cout << out << endl;
	}
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	set(Single_Test);
	return 0;
}

void set(bool test)
{
	int t = 1;
	if (test)
		std::cin >> t;
	while (t--) process();
}

void mps(int t) {
	for (int i = 1; i < 101; i++)
		for (int j = 1; j < 101; j++)
			a[t][i][j] += a[t][i][j-1] + a[t][i-1][j] - a[t][i-1][j-1];
}
