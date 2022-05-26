#include <iostream>
using namespace std;
int main() {
  int a, b;
  char sign;
  cin >> a >> sign >> b;
  if (sign == '>') {
    if (a > b )
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  if (sign == '<') {
    if (a < b )
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  if (sign == '=') {
    if (a == b )
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  
  return 0;
}

