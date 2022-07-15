/*
* A work in progress template for CPC
*/

#include <iostream>
#include <set>
#include <queue>
#include <string>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
bool is_bal(std::string);
// NUM_THEORY_HEADERS


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	int s, out = 0;
	string time;
	cin >> time >> s;
	int hs = s/60;
	int ms = s%60;
	//cout << s << endl;
	set<string> in;
	//queue<string> lol;
	do {
		in.insert(time);
		//lol.push(time);
		if (is_bal(time)) out++;
		int h = stoi(time.substr(0, 2));
		int m = stoi(time.substr(3, 2));
		//cout << h << " " << m << endl;
		h += hs;
		h = h % 24;
		m += ms;
		h += m / 60;
		h = h % 24;
		m = m % 60;
		if (h < 10)
			time = "0" + to_string(h) + ":";
		else
			time = to_string(h) + ":";
		if (m < 10)
			time += "0" + to_string(m);
		else
			time += to_string(m);
	} while (in.find(time) == in.end());
	//while (!lol.empty()) {
	//	cout << lol.front() << endl;
	//	lol.pop();
	//}
	cout << out << endl;
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

bool is_bal(std::string s) {
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size()-i-1])
			return false;
	}
	return true;
}

// NUM_THEORY_FUNCTIONS
