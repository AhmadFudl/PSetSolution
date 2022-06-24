/*
* A work in progress template for CPC
*/

#include <iostream>
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
	string s; cin >> s;
	int d = s.find('D');
	if (d == string::npos)
		cout << s.size() << endl;
	else
		cout << d << endl;
	return;
}

int main()
{
	ussio;
	freopen("adam.in", "r", stdin);
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
