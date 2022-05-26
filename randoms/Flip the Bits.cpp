#include <iostream>
int main() {
  int t; std::cin >> t;
  while (t--) {
    int n, balance = 0; std::cin >> n;
    std::string a, b; std::cin >> a >> b;
    bool pass = true;
    for (int i = 0; i < a.size(); i++) {
      balance += (a[i] - 48 ? 1 : -1);
      if ((a[i] == b[i]) != (a[i+1] == b[i+1]) && balance) {
        pass = false;
        break;
      }
    }
    if (pass)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
  return 0;
}
