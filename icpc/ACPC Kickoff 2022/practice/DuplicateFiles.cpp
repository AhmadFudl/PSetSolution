/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n; cin >> n;
	map<string, int> desk;
	vector<int> out;
	for (int i = 0; i < n; i++) {
		string file;
		int id;
		cin >> file >> id;
		if (desk.find(file) == desk.end())
			desk[file] = id;
		else
			desk[file] = min(id, desk[file]);
	}
	for (auto &i : desk)
		out.push_back(i.second);
	sort(out.begin(), out.end());
	for (auto &i : out)
		cout << i << " ";
	cout << endl;
	return;
}

int main()
{
	ussio;
	freopen("files.in", "r", stdin);
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
