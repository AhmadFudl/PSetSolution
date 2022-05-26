#include <iostream>
#include <string>
#include <algorithm>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	string str, str2;
	int t;
	cin >> t;
	while (t--) {
		cin >> str >> str2;
		int sz = std::min(str.size(), str2.size());
		int i = 0;
		for (; i < sz; i++)
			put(str[i]), put(str2[i]);
		for (; i < str.size(); i++)
			put(str[i]);
		for (; i < str2.size(); i++)
			put(str2[i]);
		put('\n');
	}
	return 0;
}
