#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

char *code;

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	#ifndef ONLINE_JUDGE
	std::freopen("in.io", "r", stdin);
	#endif
	string s, code, out;
	while (std::getline(cin, s)) {
		code += s + "\n";
	}
	std::fstream file;
	file.open("test.c", std::ios_base::out);
	file << code;
	file.close();
	std::system("cc -fpreprocessed -dD -E test.c");
	std::ifstream ifs("test.c");
	out = string( (std::istreambuf_iterator<char>(ifs)),
							(std::istreambuf_iterator<char>()    ) );
	cout << out << endl;
	return 0;
}
