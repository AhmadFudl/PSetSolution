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
	int pos = str.find("EGYPT");
	while (pos != string::npos) {
		str.replace(pos, 5, 1, ' ');
		pos = str.find("EGYPT", pos+1);
	}
	cout << str << endl;
	return 0;
}
