#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  int num[14];
  cin >> a >> b >> c;
  int min = a;
  if (min > b) min = b;
  if (min > c) min = c;
  int max = a;
  if (max < b) max = b;
  if (max < c) max = c;
  cout << min << " " << max << endl;
  return 0;
}

