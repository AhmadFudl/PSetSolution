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
	int ln, out = 0;
	cin >> ln >> str;
	for (int i = 0; i < str.size(); i++) {
		switch (str[i]) {
			case 'V':
				out += 5;
				break;
			case 'W':
				out += 2;
				break;
			case 'X':
				i++;
				break;
			case 'Y':
				if (i == str.size()-1) break;
				str.push_back(str[i+1]);
				i++;
				break;
			case 'Z':
				if (i == str.size()-1) break;
				if (str[i+1] == 'V') { out /= 5; i++; }
				else if (str[i+1] == 'W') { out /= 2; i++; }
				break;
			default:
				break;
		}
	}
	cout << out << endl;
	return 0;
}
