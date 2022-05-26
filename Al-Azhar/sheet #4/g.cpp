#include <iostream>
#include <string>
#include <ctype.h>

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
	for (char c : str) {
		if (c == ',') put(' ');
		else if (isupper(c)) put(tolower(c));
		else put(toupper(c));
	}
	put(endl);
	return 0;
}
