/*
* A work in progress template for CPC
*/

#include <iostream>
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
	//int n = 4;
	vector<int> out;
	vector<int> data;
	bool in[1001] = {0};
	if (n == 1) {
		int temp; cin >> temp;
		cout << -1 << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		data.push_back(temp);
		for (int j = 1; j <= n; j++) {
			if (!in[j] && j != temp) { out.push_back(j); in[j] = 1; break; }
			else if (!in[j] && j == n) {
				out.push_back(j);
				swap(out[j-2], out[j-1]);
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
		if (out[i] == data[i]) { cout << -1 << endl; return; }
	for (auto &i : out)
		cout << i << " ";
	cout << endl;
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
