#include <iostream>

struct date {
  long long d, c;
};

long long YtoD(long long year) {
  long long days = 0;
  days = (year) * 365;
  days += year / 4;
  return days;
}

int main()
{
  long long mon[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
  long long n; std::cin >> n;
  while (n) {
    date buffer[n];
    long long d, m, y;
    for (long long i = 0; i < n; i++) {
      std::cin >> d >> m >> y >> buffer[i].c;
      buffer[i].d = YtoD(y-1) + d;
      buffer[i].d += ((y % 4 == 0 && m > 2) ? mon[m-1]+1 : mon[m-1]);
    }
    long long beg = 0;
    date ans;
    ans.c = ans.d = 0;
    for (long long i = 0; i < n - 1; i++) {
      if (buffer[i+1].d - buffer[i].d != 1) {
        ans.c += buffer[i].c - buffer[beg].c;
        if (buffer[i].d - buffer[beg].d >= 1)
          ans.d += buffer[i].d - buffer[beg].d;
        beg = i+1;
      }
    }
    ans.c += buffer[n-1].c - buffer[beg].c;
    if (buffer[n-1].d - buffer[beg].d >= 1)
      ans.d += buffer[n-1].d - buffer[beg].d;
    std::cout << ans.d << " " << ans.c << std::endl;
    std::cin >> n;
  }
  return 0;
}
