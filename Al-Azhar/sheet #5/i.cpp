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
	int n, x, y;
	cin >> n >> x >> y;
	x--;
	y--;
	int buffer[n][n];
	for (int i = 0; i < n; i++)
		for (int a = 0; a < n; a++)
			cin >> buffer[i][a];

	for (int i = 0,a = 0; i < n; a++, i++) {
		buffer[x][a] = buffer[x][a] + buffer[y][i];
		buffer[y][i] = buffer[x][a] - buffer[y][i];
		buffer[x][a] = buffer[x][a] - buffer[y][i];
	}
	for (int i = 0,a = 0; i < n; a++, i++) {
		buffer[a][x] = buffer[a][x] + buffer[i][y];
		buffer[i][y] = buffer[a][x] - buffer[i][y];
		buffer[a][x] = buffer[a][x] - buffer[i][y];
	}
	for (int i = 0; i < n; i++) {
		for (int a = 0; a < n; a++)
			if (a == n - 1)
				cout << buffer[i][a];
			else
				cout << buffer[i][a] << " ";
		cout << endl;
	}
}
