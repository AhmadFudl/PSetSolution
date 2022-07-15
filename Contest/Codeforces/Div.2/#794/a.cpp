/*
* A work in progress template for CPC
*/

#include <iostream>
#include <cmath>
#include <cfloat>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);

bool AreSame(double a, double b)
{
    return fabs(a - b) < DBL_EPSILON;
}

void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n; cin >> n;
	int buffer[n];
	int ps[n];
	int temp;
	bool a = true, b = true;
	for (int i = 0; i < n; i++) {
		cin >> buffer[i];
		ps[i] = (i == 0 ? 0 : ps[i-1]) + buffer[i];
		if (a) {
			temp = buffer[i];
			a = false;
			continue;
		}
		if (buffer[i] != temp) b = false;
	}
	if (b) {
		cout << "YES\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		int val = ps[n-1] - ps[i] + (i == 0 ? 0 : ps[i-1]);
		int rem = val % (n-1);
		val /= n-1;
		//cout << val << " " << buffer[i] << endl;
		if (val == buffer[i] && !rem) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	set(Multiple_Tests);
	return 0;
}

void set(bool test)
{
	if (test)
	{
		int t; std::cin >> t;
		while (t--) process();
	}
	else
		process();
}
