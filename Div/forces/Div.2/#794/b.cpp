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
	int n; cin >> n;
	int buffer[n];
	for (int i = 0; i < n; i++) {
		cin >> buffer[i];
	}
	int out = 0;
	for (int i = 0; i < n-1; i++) {
		if (buffer[i] > buffer[i+1]) out++, i++;
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
