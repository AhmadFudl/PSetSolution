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

bool isodd(const int&);
bool iswond(int);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int a;
	cin >> a;
	if (isodd(a) && iswond(a))
		puts("YES");
	else
		puts("NO");
	return 0;
}

bool isodd(const int &a) {
	return a & 1;
}

bool iswond(int a) {
	if (a == 0) return true;
	std::string bits = "";
	while (a != 0) bits += '0' + a % 2, a /= 2;
	for (int i = 0; i < bits.size() / 2; i++)
		if (bits[i] != bits[bits.size()-1-i])
			return false;
	return true;
}
