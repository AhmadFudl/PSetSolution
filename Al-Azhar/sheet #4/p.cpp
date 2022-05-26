#include <ctype.h>
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
	std::getline(cin, str);
	int out = 0;
	bool word = false;
	for (int i = 0; i < str.size(); i++) {
		if (std::isalpha(str[i])) word = true;
		else if (str[i] == '.' || str[i] == '?' || str[i] == '!' || str[i] == ',' || str[i] == ' ') {
			out += word;
			word = false;
		}
	}
	out += word;
	cout << out << endl;
	return 0;
}
