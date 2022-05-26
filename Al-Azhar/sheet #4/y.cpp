#include <climits>
#include <iostream>
#include <string>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

long long av[26];

long long cost(char, char);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	string str;
	cin >> str;
	for (int i = 0; i < 26; i++)
		cin >> av[i];

	int pos = str.find('?'), ch;

	while (pos != string::npos) {
		ch = str.find_first_not_of('?', pos+1);
		char b = '-', e = '-';
		int len = 0;

		// asdf??
		if (pos == 0 && ch == string::npos) {
			len = str.size();
		}
		else if (pos == 0) {
			len = ch;
		}
		else if (ch == string::npos) {
			len = str.size() - pos;
		}
		else {
			len = ch - pos;
		}
		if (pos-1 >= 0) b = str[pos-1];
		if (ch < str.size()) e = str[ch];
		int min = INT_MAX;
		char x = 'a';

		for (char i = 'a'; i <= 'z'; i++) {
			int value = cost(b, i) + cost(i, e);
			if (value < min) {
				min = value;
				x = i;
			}
		}
		str.replace(pos, len, len, x);

		pos = str.find('?', pos+1);
	}

	long long out = 0;
	for (int i = 0; i < str.size()-1; i++) {
		out += cost(str[i], str[i+1]);
	}

	cout << out << endl << str << endl;
	return 0;
}


long long cost(char a, char b) {
	if (a == '-' || b == '-') return 0;
	else return abs(av[a-'a'] - av[b-'a']);
}
