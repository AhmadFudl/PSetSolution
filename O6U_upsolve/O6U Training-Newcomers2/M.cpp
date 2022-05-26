#include <iostream>
using namespace std;
int main() {
  char s; cin >> s;
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    // temp = 5
    int temp; cin >> temp;
    for (int j = 0; j < temp; j++)
      cout << s;
    cout << endl;
  }
  return 0;
}

