/*
* A work in progress template for CPC
*/

#include <iostream>
#include <vector>
#include <set>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

std::vector<std::set<int> > in;

void problem_Type(bool);
int cost(int);
// NUM_THEORY_HEADERS


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int n; cin >> n;
	in.resize(n);
	for (int i = 0; i < n-1; i++) {
		int u, v; cin >> u >> v;
		in[u].insert(v);
	}
	int out = 0;
	for (auto &i : in[1]) {
		out = max(out, cost(i));
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
	problem_Type(MULTIPLE_TESTS);
	return 0;
}

void problem_Type(bool a)
{
	int t = 1;
	a && std::cin >> t;
	while (t--) duck_It();
}

int cost(int idx) {
	int val = 0;
	for (auto &i : in[idx]) {
		val += 1 + cost(i);
	}
	return val;
}

// NUM_THEORY_FUNCTIONS
