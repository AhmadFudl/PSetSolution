#include <cstring>
#include <iostream>
#include <string>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	string str;
	cin >> str;
	int out = 0, l = 0, r = 0;
	bool pass = false;
	for (int i = 0; i < str.size(); i++) {
		str[i] == 'L' && l++;
		str[i] == 'R' && r++;
		if (l == r) out++;
	}
	cout << out << endl;
	for (int i = 0; i < str.size(); i++) {
		put(str[i]);
		str[i] == 'L' && l++;
		str[i] == 'R' && r++;
		if (l == r) put(endl);
	}
	return 0;
}
