#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
int main() {
  int n; std::cin >> n;
  std::vector<int> buffer(2*n);
  for (int i = 0; i < buffer.size(); i++)
    std::cin >> buffer[i];
  std::sort(buffer.begin(), buffer.end());
  //for (auto i : buffer) std::cout << i << " ";
  //std::cout << std::endl;
  int min = INT_MAX;
  for (int i = 0; i < buffer.size() - 1; i++) {
    for (int j = i+1; j < buffer.size(); j++) {
      std::vector<int> temp;
      for (int k = 0; k < buffer.size(); k++) {
        if (k == i || k == j)
          continue;
        else
          temp.push_back(buffer[k]);
      }
      int sum = 0;
      for (int k = 0; k < temp.size()-1; k+=2)
        sum += temp[k+1] - temp[k];
      if (sum < min)
        min = sum;
    }
  }
  std::cout << min << std::endl;
  return 0;
}
