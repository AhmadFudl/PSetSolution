#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

int main() {
	long double h, b, l;
	std::cin >> h >> b >> l;
	if (2*l < h) { b = (b*l*2)/h; }
	else         { h = 2*(h - l); }
	printf("%.9LF\n", atan(b/h) * (180/PI));
  return 0;
}
