#include <climits>
#include <map>
#include <stack>
#include <iostream>
#include <string>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define putd(x) printf("%lf\n", x)
#define putll(x) printf("%lld\n", x)
#define putlf(x) printf("%Lf\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	//ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [X]
	std::map<char, std::stack<char> > buffer;
	string s;
	char out = 'm';
	cin >> s;
	for (int i = s.size()-1; i >= 0; i--)
		buffer['m'].push(s[i]);
	cin >> s;
	for (int i = s.size()-1; i >= 0; i--)
		buffer['a'].push(s[i]);
	cin >> s;
	for (int i = s.size()-1; i >= 0; i--)
		buffer['r'].push(s[i]);
	while (!buffer[out].empty()) {
		char temp = buffer[out].top();
		buffer[out].pop();
		out = temp;
	}
	cout << (char)toupper(out) << endl;
	return 0;
}
