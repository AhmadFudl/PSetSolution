#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

auto main() -> signed {
	//setIO("cowsignal");
	int m, n, v;
	std::cin >> m >> n >> v;
	std::vector s(m*v, std::vector<char>(n*v));
	char ch;
	for (int i {}; i < m; i++) {
		for (int j {}; j < n; j++) {
			std::cin >> ch;
			int kstart {i*v}, lstart{j*v};
			for (int k {kstart}; k < kstart+v; k++) {
				for (int l {lstart}; l < lstart+v; l++) {
					s[k][l] = ch;
				}
			}
		}
	}
	for (int i {}; i < m*v; i++) {
		for (int j {}; j < n*v; j++) {
			std::cout << s[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}
