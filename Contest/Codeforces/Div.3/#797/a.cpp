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
	int n; cin >> n;
	int a, b, c;
	int d = n % 3;
	c = (n / 3) - 1;
	d--;
	b = (n / 3) + 1 + (d >= 0 ? 1 : 0);
	d--;
	a = (n / 3) + (d >= 0 ? 1 : 0);
	cout << a << " " << b << " " << c << endl;
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
