//#pragma GCC optimize("Ofast, inline")
#include <iostream>
#include <string>
#include <algorithm>

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

struct Item {
	int x, y, z, w, idx;
	std::string name;
	void getin(int &i) {
		std::cin >> name >> x >> y >> z >> w;
		idx = i;
	}
	void putout() {
		std::cout << name << " " << x << " ";
		std::cout << y << " " << z << " " << w;
		std::cout << endl;
	}
};

long long value(const std::string &s) {
	long long out = 0;
	for (char ch : s)
		out += (int)ch;
	return out;
}

inline bool comp(const Item &a, const Item &b) {
	if (value(a.name) + a.y + a.w < value(b.name) + b.y + b.w)
		return true;
	else if (value(a.name) + a.y + a.w == value(b.name) + b.y + b.w && a.idx > b.idx)
		return true;
	return false;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("in.io", "r", stdin);
	#endif
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [X]
	int n;
	cin >> n;
	Item item[n];
	for (int i = 0; i < n; i++)
		item[i].getin(i);
	std::sort(item, item + n, comp);
	for (int i = 0; i < n; i++)
		item[i].putout();
	return 0;
}
