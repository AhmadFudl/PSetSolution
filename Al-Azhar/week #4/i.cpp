#include <climits>
#include <iostream>

#define put std::putchar
#define get std::getchar
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
int ln = 2e5+10;

int main() {
  ussio;
	using std::cin;
	using std::cout;
  int n, k, q;
  cin >> n >> k >> q;
  int AdmPoints[ln];
  int frq[ln];
  for (int i = 0; i < ln; i++) AdmPoints[i] = frq[i] = 0;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    AdmPoints[l]++;
    AdmPoints[r+1]--;
  }
  for (int i = 1; i < ln; i++) {
    AdmPoints[i] += AdmPoints[i-1];
    frq[i] = (AdmPoints[i] >= k);
  }
  for (int i = 1; i < ln; i++) {
    frq[i] += frq[i-1];
  }
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << frq[r] - frq[l-1] << std::endl;
  }
	return 0;
}
