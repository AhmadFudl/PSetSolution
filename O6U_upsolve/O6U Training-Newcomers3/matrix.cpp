#include <iostream>
using namespace std;
int main() {
  int n; cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " " ;
    }
    cout << endl;
  }
  int sum = 0;
  for (int i = 0, j = 0; i < n; i++, j++){
    cout << arr[i][j]  << " " ;
    sum += arr[i][j];
  }
  cout << endl;
  int sum2 = 0;
  for (int i = 3, j = 0; i >= 0; i--, j++){
    cout << arr[i][j]  << " " ;
    sum2 += arr[i][j];
  }
  cout << endl;
  cout << abs(sum - sum2) << endl;
}
