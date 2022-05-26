#include <cstdlib>
#include <iostream>
#include <string>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#ifndef ussio
	#define puti(x) printf("%d\n", x)
	#define putl(x) printf("%ld\n", x)
	#define putf(x) printf("%f\n", x)
	#define putd(x) printf("%lf\n", x)
	#define putll(x) printf("%lld\n", x)
	#define putlf(x) printf("%Lf\n", x)
	#define put std::putchar
	#define get std::getchar
#endif
#define endl '\n'
//#define DEBUG

char hmm[1000][1000];
int n, m;

using namespace std;

bool fitx(int x) { return x >= 0 && x < n; }
bool fity(int y) { return y >= 0 && y < m; }

void cside(int x, int y) {
	#ifdef DEBUG 
		cout << x << " " << y << endl;
	#endif
	if (fitx(x-1) && fity(y) && hmm[x-1][y] == '.') {
		hmm[x][y] = '#';
		cside(x-1,y);
	}
	if (fitx(x) && fity(y-1) && hmm[x][y-1] == '.') {
		hmm[x][y] = '#';
		cside(x, y-1);
	}
	if (fitx(x+1) && fity(y) && hmm[x+1][y] == '.') {
		hmm[x][y] = '#';
		cside(x+1, y);
	}
	if (fitx(x) && fity(y+1) && hmm[x][y+1] == '.') {
		hmm[x][y] = '#';
		cside(x, y+1);
	}
	hmm[x][y] = '#';

	#ifdef DEBUG 
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << hmm[i][j];
			cout << endl;
		}
	#endif
}

int main() {
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	int t = 1;
	while (t--) {
		int out = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> hmm[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (hmm[i][j] == '.') {
					out++;
					cside(i, j);
					#ifdef DEBUG
						cout << "here" << endl;
					#endif
				}
		cout << out << endl;
	}
	return 0;
}
