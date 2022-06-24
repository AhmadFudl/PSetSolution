/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

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
	map<string, vector<int> > in;
	while (n--) {
		int temp; cin >> temp;
		string s;
		getline(cin, s);
		if (s[10] == 'P')
			s = '1'+s;
		else
			s = '0'+s;
		in[s].push_back(temp);
	}
	for (auto &i : in) {
		sort(i.second.begin(), i.second.end());
		int sz = i.second.size();
		for (int j = 0; j < sz; j++)
			cout << i.second[j] << " ";
	}
	cout << endl;
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("schedule.in", "r", stdin);
	#endif
	#ifndef ONLINE_JUDGE
		freopen("schedule.in", "r", stdin);
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
