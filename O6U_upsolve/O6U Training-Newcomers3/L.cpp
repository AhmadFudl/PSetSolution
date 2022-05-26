#include <iostream>
using namespace std;
int main() {
  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    int buffer[n];
    for (int i = 0; i < n; i++)
      cin >> buffer[i];
    //bubble sort
    for (int i = 0; i < n-1; i++) {
      for (int j = 0; j < n-i-1; j++) {
        if (buffer[j] > buffer[j+1]) {
          int temp = buffer[j];
          buffer[j] = buffer[j+1];
          buffer[j+1] = temp;
        }
      }
    }
    //end of sort
    for (int i = 0; i < n; i++) {
      int temp = i+1;
      while (temp--) {
        cout << buffer[i] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}

//1 6 3 7
//1 3 6
//1 3 6 7
//size = 4
//1, 1 3, 1 3 6, 1 3 6 7 -> {1, 3, 6, 7}
//3, 3 6, 3 6 7 -> {3, 6, 7}
//6, 6 7 -> {6, 7}
//7 -> {7}
