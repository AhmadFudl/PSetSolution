#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <utility>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n; cin >> n;
	int af[26] = {0};
	char ch;
	for (int i = 0; i < n; i++)
		cin >> ch, af[ch-'a']++;
	for (int i = 0; i < 26; i++)
		if (af[i]) cout << string(af[i], i+'a');
	put(endl);
	return 0;
}
