#include <vector>
#include <climits>
#include <iostream>
#include <string>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

auto main() -> signed {
	//setIO("traffic");
	int m;
	std::cin >> m;
	std::vector<std::string> type(m);
	std::vector<int> start(m), end(m);
	for (int i {}; i < m; i++)
		std::cin >> type[i] >> start[i] >> end[i];
	int low {INT_MIN}, high {INT_MAX};
	for (int i {m - 1}; i >= 0; i--) {
		if (type[i] == "none") {
			low = std::max(low, start[i]);
			high = std::min(high, end[i]);
		}
		else if (type[i] == "on") {
			low -= end[i];
			low = std::max(low, 0ll);
			high -= start[i];
		}
		else if (type[i] == "off") {
			low += start[i];
			high += end[i];
		}
	}
	std::cout << low << " " << high << std::endl;
	low = INT_MIN, high = INT_MAX;
	for (int i {}; i < m; i++) {
		if (type[i] == "none") {
			low = std::max(low, start[i]);
			high = std::min(high, end[i]);
		}
		else if (type[i] == "on") {
			low += start[i];
			high += end[i];
		}
		else if (type[i] == "off") {
			low -= end[i];
			low = std::max(low, 0ll);
			high -= start[i];
		}
	}
	std::cout << low << " " << high << std::endl;
}
