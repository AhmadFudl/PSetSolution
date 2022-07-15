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
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	long long pa, pb, qa, qb;
	cin >> pa >> pb >> qa >> qb;
	if (max(pa, pb) > max(qa, qb)) { cout << "Q\n"; }
	else if (max(pa, pb) < max(qa, qb)) { cout << "P\n"; }
	else { cout << "TIE\n"; }
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
