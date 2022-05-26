#include <iostream>
#include <string>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define putll(x) printf("%lld\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

/*
x2 x4 x6 x8
x2 (x2 + x4 + x6 + 1)
x2 (x2 (x2 + x4 + 1) + 1)
x2 (x2 (x2 (x2 + 1) + 1) + 1)

out *= x^2
out++
*/

inline long long solve(const int&, const int&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int x, n;
	cin >> x >> n;
	putll(solve(x, n));
	return 0;
}

inline long long solve(const int &x, const int &n) {
	if (n == 0 || n == 1) return false;
	long long out = 1;
	for (int i = 2; i <= n - 2; i+=2)
		out *= x*x, out++;
	out *= x*x;
	return out;
}
