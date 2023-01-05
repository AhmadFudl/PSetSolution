#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

auto main() -> signed {
	//setIO("speeding");
	int n, m, length {}, speed, out {};
	std::cin >> n >> m;
	std::vector<std::pair<int, int>> r(n), j(m);
	for (int i {}; i < n; ++i)
		std::cin >> r[i].first >> r[i].second;
	for (int i {}; i < n; ++i) {
		!length && std::cin >> length >> speed;
		out = std::max(out , speed - r[i].second);
		length -= r[i].first;
		if (length < 0) {
			r[i].first = -1 * (length);
			i--;
			length = 0;
		}
	}
	std::cout << out << std::endl;
}
