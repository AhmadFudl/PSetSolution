#include <iostream>
int main() {
  int n; std::cin >> n;
  int h[n]; for (int i = 0; i < n; i++) std::cin >> h[i];
  bool pass = true;
  while (pass) {
    pass = false;
    for (int i = 0; i < n-1; i++) {
      if (h[i] > h[i+1]) {
        int temp = h[i] - h[i+1];
        h[i+1] += temp;
        h[i] -= temp;
        pass = true;
      }
    }
  }
  for (int i = 0; i < n; i++)
    std::cout << h[i] << " ";
  std::cout << "\n";
  return 0;
}
