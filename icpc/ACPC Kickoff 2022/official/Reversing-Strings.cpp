/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <iostream>
#include <string>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
// NUM_THEORY_HEADERS


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int n, m; cin >> n >> m;
	string s, z; cin >> s >> z;
	bool pass = false;
	int idx = z.find(s);
	while (idx != string::npos) {
		if (idx == z.size()-(idx+s.size()))
			pass = true;
		idx = z.find(s, idx+1);
	}
	if (pass) { cout << "YES\n"; return; }
	reverse(s.begin(), s.end());
	idx = z.find(s);
	while (idx != string::npos) {
		if (idx == z.size()-(idx+s.size())+1)
			pass = true;
		idx = z.find(s, idx+1);
	}
	if (pass) cout << "YES\n";
	else cout << "NO\n";
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("rev.in", "r", stdin);
	#endif
	#ifdef ONLINE_JUDGE
		freopen("rev.in", "r", stdin);
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
