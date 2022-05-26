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
	long long n; cin >> n;
	if (n == 1) { cout << "NO\n"; return; }
	bool out = true;
	for (long long i = 2; i*i <= n; i++)
		if (n % i == 0) { out = false; break; }
	cout << (out ? "YES\n" : "NO\n");
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	//set(Multiple_Tests);
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
