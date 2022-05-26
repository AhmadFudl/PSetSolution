#include <iostream>
#include <utility>
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
	cout << str.size() << " " << str2.size() << endl;
	cout << str + str2 << endl;
	std::swap(str[0], str2[0]);
	cout << str << " " << str2 << endl;
	return 0;
}
