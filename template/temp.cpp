/*
* A work in progress template for CPC
*/

#include <cstdlib>
#include <iostream>

#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

using namespace std;

void Test(bool a = MULTIPLE_TESTS);
// NUM_THEORY_HEADERS

void _main() // TODO O: Find more appropriate name
{
}

int main()
{
  cin.tie(0);
  cin.sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("in.io", "r", stdin);
#endif

  Test();

  return EXIT_SUCCESS;
}

void Test(bool a)
{
  int t = 1;
  a && cin >> t;
  while (t--) _main();
}

// NUM_THEORY_FUNCTIONS
