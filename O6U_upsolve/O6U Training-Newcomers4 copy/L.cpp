#include <cstdio>
#include <cstring>
#include <iostream>
int main() {
  int n, m, temp; std::cin >> n >> m;
  m++;
  int buffer[m];
  for (int i = 0 ; i < m; i++)
    buffer[i] = 0;
  while (n--) {
    std::cin >> temp;
    buffer[temp]++;
  }
  for (int i = 1 ; i < m; i++)
    std::cout << buffer[i] << std::endl;
  return 0;
}
