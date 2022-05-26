/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);

void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n, k;
	cin >> n >> k;
	int bucket[n];
	for (int i = 0; i < n; i++) cin >> bucket[i];
	sort(bucket, bucket+n);
	reverse(bucket, bucket+n);
	for (int i = 0; i < n; i++)
		if (k % bucket[i] == 0) { cout << k / bucket[i] << endl; return; }
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
