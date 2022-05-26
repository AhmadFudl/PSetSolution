/*
* A work in progress template for CPC
*/

#include <cstdlib>
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
	int n; cin >> n;
	sieve(n);
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

void set(bool a)
{
	int t = 1;
	if (a) cin >> t;
	while (t--) process();
}

// NUM_THEORY_FUNCTIONS
