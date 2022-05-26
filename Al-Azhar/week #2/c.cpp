#include <algorithm>
#include <iostream>
#include <vector>

#define put std::putchar
using std::cin;
using std::cout;

struct dragon {
  long long str;
  long long  bonus;
};

bool cmp(const dragon &a, dragon &b) {
  return a.str < b.str;
}

int main() {
  long long s, n;
  bool pass = true;
  cin >> s >> n;
  dragon dra[n];
  for (int i = 0; i <= n-1; i++)
    cin >> dra[i].str >> dra[i].bonus;
  std::sort(dra, dra+n, cmp);
  for (int i = 0; i <= n-1; i++) {
    if (s <= dra[i].str) {
      pass = false;
      break;
    }
    s += dra[i].bonus;
  }
  cout << (pass ? "YES\n" : "NO\n");
  return 0;
}
