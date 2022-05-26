#include <iostream>
#include <string>
#include <algorithm>

#define put std::putchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	string str, sstr, min;
	bool pass = true;
	cin >> str;
	if (str.size() <= 2)
		return cout << str << endl, 0;
	for (int i = 1 ;i < str.size(); i++) {
		sstr = str;
		std::sort(sstr.begin(),sstr.begin()+i);
		std::sort(sstr.begin()+i,sstr.end());
		//for (int j = 0; j < i; j++) { put(sstr[j]); }
		//cout << " + ";
		//for (int j = i; j < sstr.size(); j++) { put(sstr[j]); }
		//put(endl);
		if (pass || min > sstr)
			min = sstr, pass = false;
		//cout << "str " + sstr << endl;
		//cout << "min " + min << endl;
		//put(endl);
	}
	cout << min << endl;
	return 0;
}
