/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);

void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n, out = 0;
	cin >> n;
	bool a, b, c;
	for (int j = 1; j <= n; j++) {
		int i = 2, k = j;
		a = b = c = false;
		while (i <= k) {
			if (k % i == 0 && !a)
			{
				a = true;
				while (k % i == 0) k/=i;
			}
			else if (k % i == 0 && a && !b)
			{
				b = true;
				while (k % i == 0) k/=i;
			}
			else if (k % i == 0 && b)
			{
				c = true;
				while (k % i == 0) k/=i;
			}
			i += 1;
		}
			if (a && b && !c)
				out++;
	}
	cout << out << endl;
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
	if (test)
	{
		int t; std::cin >> t;
		while (t--) process();
	}
	else
		process();
}

