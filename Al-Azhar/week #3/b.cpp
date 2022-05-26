#include <iostream>
#include <stack>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

int main() {
  int n; cin >> n;
  char temp;
  std::stack<char> buffer;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (buffer.empty())
      buffer.push(temp);
    else if (buffer.top() == '1' && temp == '0')
      buffer.pop();
    else if (buffer.top() == '0' && temp == '1')
      buffer.pop();
    else
      buffer.push(temp);
  }
  cout << buffer.size() << std::endl;
  return 0;
}
