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
	int t;
	cin >> t;
	while (t--) {
		cin >> str;
		if (str.size() <= 10 && cout << str << endl)
			continue;
		else
			cout << str.front() + std::to_string(str.size() - 2) + str.back() << endl;
	}
	return 0;
}
