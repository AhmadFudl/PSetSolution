#include <cstring>
#include <iostream>
#include <vector>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  int n, m, l, r;
  cin >> n >> m;
  int points[m+2];
  std::vector<int> out;
  for (int i = 0; i <= m+1; i++) points[i] = 0;
  for (int i = 0; i < n; i++) {
    cin >> l >> r;
    points[l] += 1;
    points[r+1] += -1;
  }
  for (int i = 1; i <= m; i++) {
    points[i] += points[i-1];
    if (points[i] <= 0)
      out.push_back(i);
  }
  cout << out.size() << std::endl;
  for (auto &i : out) cout << i << " ";
  cout << std::endl;
	return 0;
}
