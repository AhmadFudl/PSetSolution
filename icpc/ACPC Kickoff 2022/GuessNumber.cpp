/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

char res = '>';
long long low = 1, high = 1000000001;
long long mid = high/2;

void set(bool);
// NUM_THEORY_HEADERS


void process() // TODO: Find more appropriate name
{
	using namespace std;
	while (res != '!')
	{
		cout << mid << endl;
		cin >> res;
		cin.ignore();
		if (res == '>')
			low = mid;
		else if (res == '<')
			high = mid;
		else
		{
			cout << "! " << mid << endl;
			return;
		}
		mid = (high + low) / 2;
	}
}

int main()
{
	set(Single_Test);
	return 0;
}

void set(bool a)
{
	int t = 1;
	if (a) std::cin >> t;
	while (t--) process();
}

// NUM_THEORY_FUNCTIONS
