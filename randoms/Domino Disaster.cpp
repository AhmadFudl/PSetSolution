#include <iostream>
#include <vector>
int main() {
	int t; std::cin >> t;
	while (t--) {
		int n; std::cin >> n;
		std::string s; std::cin >> s;
		std::vector<char> output;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'U') output.push_back('D');
			if (s[i] == 'D') output.push_back('U');
			if (s[i] == 'L') output.push_back('L');
			if (s[i] == 'R') output.push_back('R');
		}
		for (int i = 0; i < output.size(); i++)
			std::cout << output[i];
		std::cout << "\n";
	}
}

