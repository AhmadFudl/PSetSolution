#include <iostream>
using namespace std;
int main() {
  int t, n, m, r, c, output; cin >> t;
  char color;
  while (t--) {
    cin >> n >> m >> r >> c;
    bool pass = true;
    output = -1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        cin >> color;
        //cout.flush();
        //cout << color << i << j << " " << r << c << endl;
        if (color == 'B' && pass) {

          if (i == r || j == c) {

            if (i == r && j == c) {
              output = 0;
              pass = false;
              continue;
            }
            output = 1;
          }
          if (output == -1) output = 2;
        }
      }
    }
    cout << output << endl;
  }
  return 0;
}
