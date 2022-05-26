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

inline double avg(double*, const int&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n;
	cin >> n;
	double *buffer = new double[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	printf("%.6lf\n", avg(buffer, n));
	delete [] buffer;
	return 0;
}

inline double avg(double *a, const int &n) {
	double out = 0;
	for (int i = 0; i < n; i++)
		out += a[i];
	return out / n;
}
