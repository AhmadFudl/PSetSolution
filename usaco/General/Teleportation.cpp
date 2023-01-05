#include <cstdlib>
#include <iostream>

#define int long long
#define endl '\n'

using namespace std;

auto main() -> signed {

  int a, b, x, y;
  cin >> a >> b >> x >> y;
  int abdis = abs(a - b);
  cout << min(abs(a - x) + abs(b - y), min(abs(a - y) + abs(b - x), abdis)) << endl;

  return EXIT_SUCCESS;
}
