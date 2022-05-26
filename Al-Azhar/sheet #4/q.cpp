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
	string str;
	std::getline(cin, str);
	char *cstr = new char [str.size()+1];
	strcpy(cstr, str.c_str());
	char *p = strtok(cstr, " ");
	bool pass = false;
	while (p != NULL) {
		if (pass) put(' ');
		else pass = true;
		for (int i = strlen(p)-1; i >= 0; i--)
			put(p[i]);
		p = strtok(NULL, " ");
	}
	put(endl);
	delete [] cstr;
	return 0;
}
