#include <iostream>
#include <math.h>
int main()
{
  long long a,c;
  long long b,d;
  std::cin >> a >> b >> c >> d;
  if (b * log(a) > d * log(c))
  {
    std::cout << "YES\n";
  }
  else{
    std::cout << "NO\n";
  }
  return 0;
}
