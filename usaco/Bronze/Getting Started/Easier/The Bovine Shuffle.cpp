#include <vector>
#include <iostream>
#include <string>
#define int long long

inline void setIO(std::string file) {
	using namespace std::literals;
	std::freopen((file + ".in"s ).c_str(), "r", stdin );
	std::freopen((file + ".out"s).c_str(), "w", stdout);
}

auto  main() -> signed {
	//setIO("shuffle");
	int n;
	std::cin >> n;
	std::vector<int> s(n);
	std::vector<std::string> c(n);
	for (int i {}; i < n ; i++)
		std::cin >> s[i], s[i]--;
	for (int i {}; i < n ; i++)
		std::cin >> c[i];
	for (int i {}; i < n; i++) {
		int pos {i};
		for (int j {}; j < 3; j++) {
			pos = s[pos];
		}
		std::cout << c[pos] << std::endl;
	}
	return 0;
}
