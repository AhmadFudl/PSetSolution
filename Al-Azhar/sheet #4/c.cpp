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
	string str, str2;
	cin >> str >> str2;
	if (str.compare(str2) <= 0)
		cout << str << endl;
	else
		cout << str2 << endl;
	return 0;
}
