#include <iostream>
using namespace std;
int main() {
  int n, q; cin >> n >> q;
  long long ps[n+1];
  ps[0] = 0;
  for (int i = 1 ; i <= n; i++) {
    cin >> ps[i];
    ps[i] += ps[i-1];
  }
  while (q--) {
    int l, r; cin >> l >> r;
    cout << ps[r] - ps[l-1] << endl;
  }
}
