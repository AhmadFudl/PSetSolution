#include <cstring>
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
	int n, odd = 0, even = 0;
	cin >> n;
	int obuffer[(n+1)/2+1], ebuffer[(n+1)/2+1];
	int oln = 1, eln = 1;
	for (int i = 1; i <= n; i++)
		if (i % 2) cin >> obuffer[oln], oln++;
		else       cin >> ebuffer[eln], eln++;
	int of[oln+1], ef[eln+1]; 
	std::memset(of, 0, sizeof(of));
	std::memset(ef, 0, sizeof(ef));
	for (int i = 1; i <= oln; i++)
		of[i] += of[i-1] + obuffer[i];
	for (int i = 1; i <= eln; i++)
		ef[i] += ef[i-1] + ebuffer[i];
	int out = 0;
	int esum = 0, osum = 0;
	for (int i = 1; i <= eln; i++) {
		osum = ef[eln-1] - ef[i-1] + of[i-1];
		esum = of[oln-1] - of[i] + ef[i-1];
		out += esum == osum;
		esum = of[oln-1] - of[i] + ef[i-1];
		osum = ef[eln-1] - ef[i] + of[i];
		out += esum == osum;
	}
	puti(out);
	return 0;
}
