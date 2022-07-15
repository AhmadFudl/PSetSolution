/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

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
	deque<int> out;
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	if (n % 2 == 1)
	{
		cout << "NO\n";
		return;
	}
	sort(buffer, buffer+n);
	for (int i = 0; i < n/2; i+=2) {
		swap(buffer[i], buffer[n-i-1]);
	}
	bool a = 1;
	for (int i = 0; i < n/2; i+=2) {
		if (a)
			out.push_back(buffer[i]);
		else
			out.push_front(buffer[i]);
		a ^= 0;
	}

	for (int i = 1; i < n-1; i++) {
		if (!((buffer[i] > buffer[i+1] && buffer[i] > buffer[i-1]) ||
				(buffer[i] < buffer[i+1] && buffer[i] < buffer[i-1]))) {
			cout << "NO\n";
			return;
		}
	}

	int i = 0;
	if (!((buffer[i] > buffer[i+1] && buffer[i] > buffer[n-1]) ||
		(buffer[i] < buffer[i+1] && buffer[i] < buffer[n-1]))) {
		cout << "NO\n";
		return;
	}

	i = n-1;
	if (!((buffer[i] > buffer[0] && buffer[i] > buffer[n-2]) ||
		(buffer[i] < buffer[0] && buffer[i] < buffer[n-2]))) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	for (int i = 0; i < n; i++)
		cout << buffer[i] << " ";
	cout << endl;
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
