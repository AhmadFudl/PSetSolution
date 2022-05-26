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
	string url;
	cin >> url;
	int pos = -1;
	pos = url.find('=', pos+1);
	cout << "username: " + url.substr(pos+1, url.find('&', pos) - pos - 1) << endl;
	pos = url.find('=', pos+1);
	cout << "pwd: " + url.substr(pos+1, url.find('&', pos) - pos - 1) << endl;
	pos = url.find('=', pos+1);
	cout << "profile: " + url.substr(pos+1, url.find('&', pos) - pos - 1) << endl;
	pos = url.find('=', pos+1);
	cout << "role: " + url.substr(pos+1, url.find('&', pos) - pos - 1) << endl;
	pos = url.find('=', pos+1);
	cout << "key: " + url.substr(pos+1, url.find('&', pos) - pos - 1) << endl;
	return 0;
}
