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

inline int sum(const int&, const int&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int a, b;
	cin >> a >> b;
	puti(sum(a, b));
	return 0;
}

inline int sum(const int &a, const int &b) {
	return a + b;
}
