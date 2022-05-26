#include <iostream>
#include <string>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

inline void nput(const int&, const char&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int t, n;
	char c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		nput(n, c);
	}
	return 0;
}

inline void nput(const int &n, const char & c) {
	for (int i = 0; i < n-1; i++)
		put(c), put(' ');
	put(c), put(endl);
}
