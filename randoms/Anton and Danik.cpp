#include <iostream>
using std::endl, std::cin, std::cout;
void
print() {
	cout << "hello, world\n";
}
int main() {
  print();
  int n, ans = 0; cin >> n;
  char input;
  for (int i = 0; i < n; i++) {
    cin >> input;
    if (input == 'A')
    ans++;
    else
    ans--;
  }
  if (!ans)
  cout << "Friendship\n";
  else {
    if (ans < 0)
    cout << "Danik\n";
    else
    cout << "Anton\n";
  }
}
