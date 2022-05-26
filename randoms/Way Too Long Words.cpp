#include <iostream>
int main()
{
  int t; std::cin >> t;
  while (t--) {
    std::string word; std::cin >> word;
    if (word.size() > 10)
      std::cout << word[0] << word.size() - 2 << word[word.size()-1] << std::endl;
    else 
      std::cout << word << std::endl;
  }
  return 0;
}
