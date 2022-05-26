#include <algorithm>
#include <iostream>

#define put std::putchar
#define get std::getchar
#define US_stdio std::cin.tie(0), std::cin.sync_with_stdio(0)

int main() {
	using std::cin;
	using std::cout;
  int n, q;
  cin >> n >> q;
  int buffer[n];
  int valvl[n+10];
  int slvl[q+1];
  for (int i = 0; i <= q; i++) slvl[i] = 0;
  for (int i = 0; i <= n+1; i++) valvl[i] = 0;
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  std::sort(buffer, buffer+n);
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    valvl[l]++;
    valvl[r+1]--;
  }
  for (int i = 1; i < n+1; i++) {
    valvl[i] += valvl[i-1];
    slvl[valvl[i]]++;
  }
  int j = n-1;
  int ln = n;
  long long out = 0;
  //put('\n');
  //put('\n');
  //for (int i = 0; i < n; i++)
  //  cout << buffer[i] << ' ';
  //cout << std::endl;
  //for (int i = 1; i < n+1; i++)
  //  cout << valvl[i] << " ";
  //cout << std::endl;
  //for (int i = 1; i < q+1; i++)
  //  cout << slvl[i] << " ";
  //cout << std::endl;
  //put('\n');
  //put('\n');
  for (int i = q; i >= 1; i--) {
    ln = ln-slvl[i];
    for (; j >= ln; j--) {
      out += (long long)i * (long long)buffer[j];
    }
  }
  cout << out << std::endl;
	return 0;
}
