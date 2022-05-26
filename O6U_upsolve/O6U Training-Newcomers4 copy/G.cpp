#include <algorithm>
#include <iostream>
int main() {
  int n; std::cin >> n;
  std::string s, t;
  while (n--) {
    std::cin >> s >> t;
    int i, size = std::min(s.size(), t.size());
    for (i = 0; i < size; i++)
      std::cout << s[i] << t[i];
    if (s.size() > t.size()) {
      for (; i < s.size(); i++)
        std::cout << s[i];
    }
    else { 
      if (t.size() > s.size())
        for (; i < t.size(); i++)
          std::cout << t[i];
    }
    std::cout << std::endl;
  }
  return 0;
}
