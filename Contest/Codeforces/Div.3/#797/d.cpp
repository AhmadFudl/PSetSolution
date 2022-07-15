/*
* A work in progress template for CPC
*/

#include <cstring>
#include <iostream>
#include <iterator>
#include <string>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n, k; cin >> n >> k;
	string in; cin >> in;
	int wf[n];
	memset(wf, 0, sizeof(wf));
	for (int i = 0; i < in.size(); i++) {
		wf[i] += (in[i] == 'W' ? 1 : 0) + (i == 0 ? 0 : wf[i-1]);
	}

	int out = INT_MAX;

	for (int i = k-1; i < in.size(); i++) {
		if (wf[i] - (i - k + 1 == 0 ? 0 : wf[i - k]) < out)
			out = wf[i] - (i - k + 1== 0 ? 0 : wf[i - k]);
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
