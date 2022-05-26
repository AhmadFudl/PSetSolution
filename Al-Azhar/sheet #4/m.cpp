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
	char ch[5] = {'h','e','l','l','o'};
	string str;
	cin >> str;
	int pos = -1;
	int a = 1;
	for (char &c : ch) {
		pos = str.find(c, pos+1);
		// cout << pos << ' ' << c << a++ << endl;
		if (pos == string::npos)
			return puts("NO"), 0;
	}
	puts("YES");
	return 0;
}
