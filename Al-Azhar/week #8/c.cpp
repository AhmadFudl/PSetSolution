/*
* A work in progress template for CPC
*/

#include <iostream>
#include <numeric>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);

void process() // TODO: Find more appropriate name
{
	using namespace std;
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b) << endl;
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
