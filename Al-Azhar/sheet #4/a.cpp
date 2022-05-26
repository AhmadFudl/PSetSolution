#include <iostream>
#include <string>
#include <vector>

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
	str.push_back(' ');
	str.append(str2);
	cout << str << endl;
	return 0;
}
