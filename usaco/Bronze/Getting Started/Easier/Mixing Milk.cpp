#include <cstdio>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

auto main() -> signed {
	//setIO("mixmilk");
	std::vector<std::pair<int, int>> b(3);
	for (int i {0}; i < 3; i++) {
		std::cin >> b[i].first;
		std::cin >> b[i].second;
	}
	for (int i {0}; i < 100; i++) {
		int amt { std::min(b[i%3].second, b[(i+1)%3].first - b[(i+1)%3].second) };
		b[i%3].second -= amt;
		b[(i+1)%3].second += amt;
	}
	std::cout << b[0].second << std::endl;
	std::cout << b[1].second << std::endl;
	std::cout << b[2].second << std::endl;
	return 0;
}
