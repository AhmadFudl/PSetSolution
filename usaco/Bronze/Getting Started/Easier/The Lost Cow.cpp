#include <cstdio>
#include <iostream>
#include <string>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

bool halt(int, int, int);

auto main() -> signed {
	//setIO("lostcow");
	int x, y, dis {}, i {1}, b {};
	std::cin >> x >> y;
	while (x != y) {
		dis += std::abs(i) + b;
		if (halt(x, y, i)) break;
		b = abs(i);
		i *= -2;
	}
	dis -= std::abs(x + i - y);
	std::cout << dis << std::endl;
	return 0;
}

bool halt(int x, int y, int i) {
	if (x > y && x + i <= y)
		return true;
	else if (x < y && x + i >= y)
		return true;
	else if (x == y)
		return true;
	else 
		return false;
}
/*
4
1
7
1 + 3 + 6 - 1
*/
