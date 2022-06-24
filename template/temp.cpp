/*
* A work in progress template for CPC
*/

#include <cstdlib>
#include <iostream>

#define endl '\n'
#define MULTIPLE_TESTS 1
#define SINGLE_TEST 0

using namespace std;

void Test(bool);
// NUM_THEORY_HEADERS

void duck_It() // TODO: Find more appropriate name
{
  // TODO solve:
}

int main()
{
  cin.tie(0);
  cin.sync_with_stdio(0);
  #ifndef ONLINE_JUDGE
    freopen("in.io", "r", stdin);
  #endif

  Test(SINGLE_TEST);

  return EXIT_SUCCESS;
}

void Test(bool a)
{
  int t = 1;
  a && cin >> t;
  while (t--) duck_It();
}

// NUM_THEORY_FUNCTIONS
