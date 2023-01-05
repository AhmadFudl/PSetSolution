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
	//setIO("blist");
	int n, s, t, b, out {}, end {};
	std::cin >> n;
	std::vector<int> buckets(1001);
	for (int i {}; i < n; i++) {
		std::cin >> s >> t >> b;
		buckets[s] += b;
		buckets[t+1] -= b;
		end = std::max(end, t+1);
	}
	for (int i {1}; i < end; i++) {
		buckets[i] += buckets[i-1];
		out = std::max(out, buckets[i]);
	}
	std::cout << out << std::endl;
	return 0;
}
