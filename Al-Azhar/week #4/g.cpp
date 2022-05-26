#include <climits>
#include <iostream>
#include <vector>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
  US_stdio;
	using std::cin;
	using std::cout;
  int n; cin >> n;
  long long buffer[n];
  long long sum = 0;
  long long max = INT_MIN, maxi, smax = INT_MIN;
  int counter = 0;
  for (int i = 0; i < n; i++) {
    cin >> buffer[i], sum += buffer[i];
    if (buffer[i] > max) max = buffer[i], maxi = i;
  }
  for (int i = 0; i < n; i++) {
    if (i == maxi) continue;
    if (smax < buffer[i]) smax = buffer[i];
  }
  std::vector<int> out;
  //cout << max1 << " " << max2 << std::endl;
  //cout << sum << std::endl;
  for (int i = 0; i < n; i++) {
    //cout << buffer[i] << " " << sum - buffer[i] << std::endl;
    if (i == maxi) {
      if (sum - buffer[i] - smax == smax)
        out.push_back(i+1);
    }
    else {
      if (sum - buffer[i] - max == max)
        out.push_back(i+1);
    }
  }
  cout << out.size() << std::endl;
  for (auto i : out) cout << i << " ";
  cout << std::endl;
	return 0;
}
