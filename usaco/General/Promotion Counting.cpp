#include <cstdlib>
#include <iostream>
#include <stack>
#define int long long
#define endl '\n'

using namespace std;

stack<int> ans;
int out(int count);

auto main() -> signed {

  out(1);
  while (!ans.empty()) {
    cout << ans.top() << endl;
    ans.pop();
  }
  return EXIT_SUCCESS;
}

int out(int count) {
  if (count > 4) return 0;
  int a, b; cin >> a >> b;
  b += out(count + 1);
  if (count > 1) ans.push(a < b ? b - a : 0);
  return (a < b ? b - a : 0);
}
