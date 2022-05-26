#include <algorithm>
#include <iostream>
int main() {
  std::string s, temp, ans; std::cin >> s;
  bool pass = true;
  if (!(s.size() == 1)) {
    ans = s;
    for (int j = 1; j < s.size(); j++) {
      temp = s;
      std::sort(temp.begin(), temp.begin()+j);
      std::sort(temp.begin()+j, temp.end());
      if (temp < ans || pass) {
        ans = temp;
        pass = false;
      }
    }
    std::cout << ans << std::endl;
  }
  else {
    std::cout << s << std::endl;
  }
  return 0;
}
