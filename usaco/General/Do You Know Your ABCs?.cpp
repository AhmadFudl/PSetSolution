#include <algorithm>
#include <cstdlib>
#include <iostream>
#define int long long
#define endl '\n'
#define sz 7

using namespace std;

auto main() -> signed {

  int num[sz];
  for (int i = 0; i < sz; i++)
    cin >> num[i];

  sort(num, num + sz);
  cout << num[0] << " ";
  cout << num[1] << " ";
  cout << num[6] - num[0] - num[1] << endl;

  return EXIT_SUCCESS;
}
