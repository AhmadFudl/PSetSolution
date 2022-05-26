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
	int nf[10] = {0};
	for (int i = 0; i < s.size(); i++)
	{
		nf[s[i]-'0']++;
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (nf[i] != s[i]-'0')
		{
			cout << "not self-describing\n";
			return;
		}
	}
	cout << "self-describing\n";
	return;
}

int main()
{
	//ussio;
	freopen("self.in", "r", stdin);
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
