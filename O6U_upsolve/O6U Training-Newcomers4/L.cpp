#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int fq[100001];
int main() {
  int n, m; cin >> n >> m;
  for (int i = 0 ; i < n; i++) {
    int temp; cin >> temp;
    fq[temp]++;
  }
  for (int i = 1; i <= m; i++)
    cout << fq[i] << endl;
}
