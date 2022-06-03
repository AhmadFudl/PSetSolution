/*
* A work in progress template for CPC
*/

#include <iostream>
#include <algorithm>
#include <map>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	long long n; cin >> n;
	long long buffer[n];
	map<int, bool> fa;
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	int beg = 0, end = 0, max = 0;
	int max_beg = 0, max_end = 0;

	for (int i = 0; i < n; i++) {
		//cout << buffer[i] << ": ";
		if (fa.find(buffer[i]) == fa.end()) {
			//cout << "here\n";
			fa[buffer[i]] = true;
			end = i;
			//cout << "=== " << beg << " " << end << endl;
		}
		else {
			//cout << "not\n";
			int b = n - end - 1;
			int a = 2 * min(beg, b);
			a += std::max(b, beg);
			int c = n - max_end - 1;
			int out = 2 * min(max_beg, c);
			out += std::max(c, max_beg);
			if (end - beg + 1 >= max && a <= out) {
					max_beg = beg;
					max_end = end;
					max = max_end - max_beg + 1;
			}

			//cout << "begin\n";
			for (int j = beg; j <= i; j++) {
				//cout << j << endl;
				if (buffer[j] == buffer[i]) {
					beg = j + 1;
					break;
				}
				fa.erase(buffer[j]);
			}
			//cout << "end\n";
			end = i;
			//cout << "=== " << beg << " " << end << endl;

		}
	}

	if (end - beg + 1 >= max) {
		max_beg = beg;
		max_end = end;
		max = max_end - max_beg + 1;
	}

	//cout << max_beg << " " << max_end << endl;
	int c = n - max_end - 1;
	int out = 2 * min(max_beg, c);
	out += std::max(c, max_beg);
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
