#include <iostream>

#define put std::putchar

int main() {
  using std::cin;
  using std::cout;
  int t, r, c; cin >> t;
  for (int k = 1; k <= t; k++) {
    cin >> r >> c;
    cout << "Case #" << k << ":\n";
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i == 0 && j == 0) { put('.'); put('.'); continue; }
        put('+');
        put('-');
      }
      puts("+");
      for (int j = 0; j < c; j++) {
        if (i == 0 && j == 0) { put('.'); put('.'); continue; }
        put('|');
        put('.');
      }
      puts("|");
    }
    for (int j = 0; j < c; j++) {
      put('+');
      put('-');
    }
    puts("+");
  }
  return 0;
}
