#include <iostream>
#include <string>
#include <utility>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int a, b;
	cin >> a >> b;
	std::swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}
