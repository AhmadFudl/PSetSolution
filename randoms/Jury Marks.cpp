#include <iostream>
#include <set>
int main()
{
  // 4 1
  // -5 5 0 20
  // 10
  int k, n; std::cin >> k >> n;
  int a[k], b[n];
  std::cin >> a[0];
  for (int i = 1; i < k; i++) {
    std::cin >> a[i];
    a[i] += a[i-1];
  }
  // a = -5 0 0 20
  for (int i = 0; i < n; i++) std::cin >> b[i];
  // b = 10
  std::set<int> output;
  for (int i = 0; i < n; i++) {
    std::set<int> temp;
    for (int j = 0; j < k; j++) {
      if (!i || output.find(a[j]-b[i]) != output.end())
        temp.insert(a[j] - b[i]);
      // temp = 
    }
    output = temp;
    // output = 
  }
  std::cout << output.size() << std::endl;
  return 0;
}
