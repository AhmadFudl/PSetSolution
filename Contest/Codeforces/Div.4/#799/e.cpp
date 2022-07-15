/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
// NUM_THEORY_HEADERS
std::vector<int> in;


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int n, s;
	cin >> n >> s;
	in.clear();
	in.resize(n);
	int pf[n];
	int out = INT_MAX;
	bool pass = true;
	for (int i = 0; i < n; i++) {
		cin >> in[i];
		pf[i]  = in[i] + (i == 0 ? 0 : pf[i-1]);
	}
	//cout << pf[n-1] << endl;
	int sum = 0;
	for (int i = 0, j = 0; i < n;) {
		sum = pf[j] - (i == 0 ? 0 : pf[i-1]);
		while (sum != s && j < n) {
			j++;
			sum = pf[j] - (i == 0 ? 0 : pf[i-1]);
		}
		if (j == n) break;
		//cout << "j = " << j << endl;
		while (in[j+1] == 0 && j < n) j++;
		if (j == n) j--;
		//cout << i << " " << j << " -> " << sum << " -> ";
		if (sum == s) {
			int r = ((i == 0 ? 0 : pf[i-1]) > 0 ? (i == 0 ? 0 :i) : 0);
			r += (pf[n-1] - pf[j] > 0 ? n - (j + 1) : 0);
			out = min(r, out);
			pass = false;
			//cout << out;
		}
		//cout << endl;
		int temp = sum;
		while (temp != sum - 1 && i < n) {
			temp -= in[i];
			i++;
		}
		if (i == n) break;
	}
	if (pass) cout << -1 << endl;
	else      cout << out << endl;
	//cout << "----------------------------\n";
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
