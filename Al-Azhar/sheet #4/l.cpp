#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <utility>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int ln, q;
	string str, qr;
	cin >> ln >> q >> str;
	cin.ignore();
	while (q--) {
		std::getline(cin, qr);
		char *c_qr = new char [qr.size()+1];
		std::strcpy(c_qr, qr.c_str());
		char *pch = strtok(c_qr, " ");
		if (strcmp(pch, "pop_back") == 0) { str.pop_back(); }
		else if (strcmp(pch, "front") == 0) { put(str.front()), put(endl); }
		else if (strcmp(pch, "back") == 0) { put(str.back()), put(endl); }
		else if (strcmp(pch, "print") == 0) {
			int pos;
			pch = strtok(NULL, " ");
			pos = atoi(pch)-1;
			put(str.at(pos));
			put(endl);
		}
		else if (strcmp(pch, "push_back") == 0) {
			pch = strtok(NULL, " ");
			str.push_back(pch[0]);
		}
		else {
			string temp(pch);
			int l, r;
			pch = strtok(NULL, " ");
			l = atoi(pch)-1;
			pch = strtok(NULL, " ");
			r = atoi(pch)-1;
			int min = std::min(l,r);
			int max = std::max(l,r);
			l = min, r = max;
			if (temp.find("sort") != string::npos) {
				std::sort(str.begin()+l, str.begin()+r+1);
			} else if (temp.find("reverse") != string::npos) {
				for (int i = l; i < (r+1-l)/2+l; i++)
					std::swap(str[i], str[r-(i-l)]);
			} else {
				for (int i = l; i <= r; i++)
					put(str[i]);
				put(endl);
			}
		}
		delete [] c_qr;
	}
	return 0;
}
