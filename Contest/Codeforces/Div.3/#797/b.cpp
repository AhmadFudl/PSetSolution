/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n;
	cin >> n;
	int a[n], b[n];
	int diff = 0;
	bool out = true;

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	for (int i = 0; i < n; i++)
		if (a[i] >= b[i] && a[i] - b[i] > diff)
			diff = a[i] - b[i];
	if (diff < 0) {
		out = false;
		cout << (out ? "YES\n" : "NO\n");
		return;
	}
	//cout << diff << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] < b[i]) {
			out = false;
			//cout << 1 << endl;
			break;
		}
		else {
			if (!b[i] && a[i] - b[i] > diff) {
				out = false;
				//cout << 2 << endl;
				break;
			}
			else if (b[i] && a[i] - b[i] != diff) {
				out = false;
				//cout << a[i] << " " << b[i] << endl;
				//cout << 3 << endl;
				break;
			}
		}
	}
	cout << (out ? "YES\n" : "NO\n");
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
