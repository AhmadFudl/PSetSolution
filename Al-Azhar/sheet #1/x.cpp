#include <iostream>
#include <algorithm>
int main() {
  int num[4], temp[4];
  bool pass = false;
  for (int i = 0; i < 4; i++) {
    std::cin >> num[i];
    temp[i] = num[i];
  }
  std::sort(temp, temp+4);
  int t;
  if (!(num[0] < num[2])) {
    t = num[2];
    num[2] = num[0];
    num[0] = t;
    t = num[3];
    num[3] = num[1];
    num[1] = t;
  }
  for (int i = 0; i < 4; i++)
    if (temp[i] != num[i])
      pass = true;
  if (pass)
    std::cout << temp[1] << ' ' << temp[2] << '\n';
  else {
    if (temp[1] == temp[2])
      std::cout << temp[1] << ' ' << temp[2] << '\n';
    else
      std::cout << "-1\n";
  }
  return 0;
}
