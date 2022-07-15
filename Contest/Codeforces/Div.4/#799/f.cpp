/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>
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
	std::vector<int> in;
	int nf[10] = {0};
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		if (nf[temp % 10] < 3)
			in.push_back(temp % 10), nf[temp % 10]++;
	}
	for (int i = 0 ; i < in.size(); i++) {
		for (int j = i + 1; j < in.size(); j++) {
			for (int k = j + 1; k < in.size(); k++) {
				if ((in[i] + in[j] + in[k]) % 10 == 3) {
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
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
