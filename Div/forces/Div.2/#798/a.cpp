/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
// NUM_THEORY_HEADERS


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int n, m, k;
	string a, b;
	cin >> n >> m >> k >> a >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	int tempa = k;
	int tempb = k;
	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			if (tempa) {
				tempb = k;
				cout << a[i];
				i++;
				tempa--;
			}
			else {
				tempa = k;
				cout << b[j];
				j++;
				tempb--;
			}
		}
		else {
			if (tempb) {
				tempa = k;
				cout << b[j];
				j++;
				tempb--;
			}
			else {
				tempb = k;
				cout << a[i];
				i++;
			}
		}
	}
	//while (i < n)
	//	cout << a[i++];
	//while (j < m)
	//	cout << b[j++];
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
