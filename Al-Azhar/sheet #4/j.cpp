#include <cstring>
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
	int af[26] = {0};
	string str;
	cin >> str;
	for (char &c : str)
		af[c-'a']++;
	for (int i = 0; i < 26; i++)
		if (af[i])
			cout << (char) (i+'a') << " : " << af[i] << endl;
	return 0;
}
