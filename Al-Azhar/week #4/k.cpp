#include <iostream>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

struct inst {
  std::string moves;
  int l, r, f, b;
  void set() {
    l = r = f = b = 0;
  }
};

int main() {
	using std::cin;
	using std::cout;
  int x, y;
  inst map;
  cin >> x >> y >> map.moves;
  map.set();
  for (auto &i : map.moves) {
    if (i == 'L') map.l++;
    else if (i == 'R') map.r++;
    else if (i == 'B') map.b++;
    else map.f++;
  }
  if (map.l == map.r && map.f == map.b && map.l && map.l >= abs(x) && map.f >= abs(y))
    puts("YES");
  else
    puts("NO");
	return 0;
}
