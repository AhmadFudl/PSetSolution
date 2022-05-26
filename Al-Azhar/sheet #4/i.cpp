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
	for (int i = 0; i < str.size()/2; i++)
		if (str[i] != str[str.size()-1-i])
			return puts("NO"), 0;
	puts("YES");
	return 0;
}
