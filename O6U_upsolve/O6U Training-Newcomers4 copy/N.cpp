#include <iostream>
int main() {
  int t, n; std::cin >> t;
  while (t--) {
    std::cin >> n;
    int ans = 0, counter = 1, past, current; std::cin >> past;
    n--;
    while (n--) {
      std::cin >> current;
      if (current < past) {
        ans += ((counter * (1 + counter)) /2);
        counter = 0;
      }
      counter++;
      past = current;
    }
    ans += ((counter * (1 + counter)) /2);
    std::cout << ans << std::endl;
  }
  return 0;
}
