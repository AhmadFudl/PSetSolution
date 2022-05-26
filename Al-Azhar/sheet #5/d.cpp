#include <iostream>
#include <string>
#include <cmath>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

inline bool isprime(const int&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		isprime(n) ? puts("YES") : puts("NO");
	}
	return 0;
}

inline bool isprime(const int &a) {
	if (a == 1) return false;
	int ln = sqrt(a);
	for (int i = 2; i <= ln; i++)
		if (a % i == 0)
			return false;
	return true;
}
