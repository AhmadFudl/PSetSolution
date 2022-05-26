#include <iostream>
#include <algorithm>
int main() {
  std::string word; std::cin >> word;
  int prev = 1, ans = 0;
  //97
  for (int i = 0; i < word.size(); i++) {
    if (prev <= word[i] - 96)     //.....prev.....word[i]....
      ans += std::min(word[i] - 96 - prev, prev + (26 - (word[i] - 96)));
    else      //.....word[i].....prev....
      ans += std::min(prev - (word[i] - 96), 26 - prev + (word[i] - 96));
    prev = word[i] - 96;
  }
  std::cout << ans << "\n";
  return 0;
}
