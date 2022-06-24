/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <iostream>
#include <climits>
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
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int af[k][26];
	int out = 0;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < 26; j++)
			af[i][j] = 0;
	for (int i = 0; i < s.size(); i++)
		af[i%k][s[i]-'a']++;
	for (int i = 0; i < k; i++) {
		int mx = INT_MIN, total = 0;
		for (int j = 0; j < 26; j++) {
			total += af[i][j];
			mx = max(mx, af[i][j]);
		}
		out += total - mx;
	}
	cout << out << endl;
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("good.in", "r", stdin);
	#endif
	#ifdef ONLINE_JUDGE
		freopen("good.in", "r", stdin);
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
