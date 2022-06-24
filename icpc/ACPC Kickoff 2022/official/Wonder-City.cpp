/*
* A work in progress template for CPC
*/

#include <iostream>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

void problem_Type(bool);
// NUM_THEORY_HEADERS


void duck_It() // TODO: Find more appropriate name
{
	using namespace std;
	float n, s1, s2, r1, r2, w1, w2;
	cin >> n >> s1 >> s2 >> r1 >> r2 >> w1 >> w2;
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("wonder.in", "r", stdin);
	#endif
	#ifdef ONLINE_JUDGE
		freopen("wonder.in", "r", stdin);
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
