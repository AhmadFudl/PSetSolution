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
	string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string str;
	int q;
	cin >> q >> str;
	if (q == 1) {
		for (char &c : str) {
			if (isalpha(c)) {
				isupper(c) && put(Key[c-'A' + 26]);
				islower(c) && put(Key[c-'a']);
			}
			else
				put(Key[52+c-'0']);
		}
		put(endl);
	}
	else {
		for (char &c : str)
			put(Original[Key.find(c)]);
		put(endl);
	}
	return 0;
}
