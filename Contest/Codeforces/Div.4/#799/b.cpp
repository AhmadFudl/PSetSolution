/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
// NUM_THEORY_HEADERS

void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int n; cin >> n;
	int fa[10001] = {0};
	int in[n];
	int out = 0;
	for (int i = 0; i < n; i++)
		cin >> in[i], fa[in[i]]++;
	for (int i = 0; i < 10001; i++)
		if (fa[i] > 1)
			out += fa[i] - 1;
	if (out % 2 != 0)
		cout << n - out - 1 << endl;
	else
		cout << n - out << endl;
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	problem_Type(MULTIPLE_TESTS);
	return 0;
}

void problem_Type(bool a)
{
	int t = 1;
	a && std::cin >> t;
	while (t--) duck_It();
}

// NUM_THEORY_FUNCTIONS
