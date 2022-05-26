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
	int out = 0;
	for (char &c : str) {
		out += c - '0';
	}
	cout << out << endl;
	return 0;
}
