#include <iostream>
int main() {
  std::string url; std::cin >> url;
  int i = 0;
  for (; i < url.size(); i++)
    if (url[i] == '?')
      break;
  i++;
  for (; i < url.size(); i++) {
    if (url[i] == '=') {
      std::cout << ": ";
      continue;
    }
    if (url[i] == '&') {
      std::cout << "\n";
      continue;
    }
    std::cout << url[i];
  }
  std::cout << "\n";
  return 0;
}
