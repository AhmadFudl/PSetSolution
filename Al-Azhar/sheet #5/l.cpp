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

inline void conc(int*, int*, int, int*);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n;
	cin >> n;
	int *a = new int[n], *b = new int[n], *c = new int[2*n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	conc(a, b, n, c);
	for (int i = 0; i < 2*n - 1; i++)
		cout << c[i] << " ";
	puti(c[2*n - 1]);
	delete [] a;
	delete [] b;
	delete [] c;
	return 0;
}

inline void conc(int* a, int* b, int n, int* c) {
	for (int i = 0; i < n; i++)
		c[i] = b[i];
	for (int i = n; i < 2*n; i++)
		c[i] = a[i-n];
}
