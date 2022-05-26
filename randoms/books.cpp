#include <iostream>
int main() {
  int n, t; std::cin >> n >> t;	
  int buffer[n+1];
  buffer[0] = 0;
  std::cin >> buffer[1];
  for (int i = 2; i <= n; i++) {
    std::cin >> buffer[i];
    buffer[i] += buffer[i-1];
  }
  int first = 0, second = 1, max_books = 0;
  //for (int i = 0; i <= n; i++)
  //  std::cout << buffer[i] << " ";
  //std::cout << std::endl;
  while (true) {
    //indexs = 0 1 2 3
    //buffer = 0 2 2 3
    //buffer = 0 2 4 7
    while (second <= n && buffer[second] - buffer[first] <= t) second++;
  //  std::cout << second << std::endl;
    second--;
    if (max_books < second - first)
      max_books = second - first;
  //  std::cout << first << " " << second << " " << max_books << std::endl;
    first++;
    if (second == n)
      break;
  }
  std::cout << max_books << std::endl;
}
