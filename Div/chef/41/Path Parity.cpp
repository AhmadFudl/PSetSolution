/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	long long n, k;
	cin >> n >> k;
	if (n == 0 && k == 0) cout << "NO\n";
	else if (n == 0 && k == 1) cout << "YES\n";
	else if (n % 2 == 0) cout << "YES\n";
	else if (n % 2 != 0 && k == 0) cout << "NO\n";
	else cout << "YES\n";
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

void set(bool a)
{
	int t = 1;
	if (a) std::cin >> t;
	while (t--) process();
}

// NUM_THEORY_FUNCTIONS
