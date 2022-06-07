/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	long long n, k; cin >> n >> k;
	vector<stack<int> > a(k);
	long long out = 0;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		a[temp % k].push(temp);
	}
	for (int i = k-1; i >= 0; i--) {
		for (int j = 0; j <= k-1; j++) {
			for (; !a[i].empty() && !a[j].empty();) {
				long long b, c;
				c = a[i].top();
				a[i].pop();
				b = a[j].top();
				a[j].pop();
				out += (c+b)/k;
			}
		}
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
