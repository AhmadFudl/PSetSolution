#include <iostream>
#include <string>
#include <climits>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	string str, a = "egypt";
	cin >> str;
	int af[26] = {0};
	for (char &c : str) {
		isupper(c) && af[c-'A']++;
		islower(c) && af[c-'a']++;
	}
	int min = INT_MAX;
	for (char &c : a)
		min = std::min(min, af[c-'a']);
	cout << min << endl;
	return 0;
}
