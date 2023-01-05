#include <algorithm>
#include <string>
#include <cstdio>
#include <iostream>
#include <vector>
#define int long long

inline void setIO(std::string file) {
	std::freopen((file + ".in" ).c_str() , "r", stdin );
	std::freopen((file + ".out").c_str() , "w", stdout);
}

auto main() -> signed {
	//setIO("shell");
	int swaps;
	std::cin >> swaps;
	std::vector places (3, std::vector<int> (4));
	places[0][0] = 1;
	places[1][1] = 1;
	places[2][2] = 1;
	while (swaps--) {
		int a, b, g;
		std::cin >> a >> b >> g;
		a--; b--; g--;
		std::swap(places[0][a], places[0][b]);
		std::swap(places[1][a], places[1][b]);
		std::swap(places[2][a], places[2][b]);
		if (places[0][g]) places[0][3]++;
		if (places[1][g]) places[1][3]++;
		if (places[2][g]) places[2][3]++;
	}
	std::cout << std::max({places[0][3], places[1][3], places[2][3]}) << std::endl;
	return 0;
}
