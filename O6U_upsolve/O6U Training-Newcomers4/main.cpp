#include <iostream>
using namespace std;
int main() {
  int n = 10;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];

  int counter = 0;
  //sort using bubble sort algo
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      counter++;
      if (buffer[j] > buffer[j+1]) {
        int temp = buffer[j+1];
        buffer[j+1] = buffer[j];
        buffer[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++)
    cout << buffer[i] << endl;
  cout << counter << endl;
  return 0;
}
