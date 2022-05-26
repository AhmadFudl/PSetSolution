#include <deque>
#include <iostream>
#include <stack>

#define put std::putchar
using std::cin;
using std::cout;

int main() {
  int t, n; std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::deque<int> A;
    for (int i = n; i > 1; i--) {
      A.push_front(i);
      A.push_front(A.back());
      A.pop_back();
    }
    A.push_front(1);
    int temp = A.back();
    A.pop_back();
    for (auto i: A)
      cout << i << ' ';
    cout << temp << '\n';
  }
  return 0;
}
