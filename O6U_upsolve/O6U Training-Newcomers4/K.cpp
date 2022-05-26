#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  string s; cin >> s;
  string min = s;
  for (int i = 0 ; i < s.size() - 1; i++) {
    string temp = s;
    //range from 0 to i : with i included
    //first part sort
    //ba
    sort(temp.begin(), temp.begin()+i+1);
    //mrge sort
    //
//    for (int k = 0; k < i; k++) {
//      for (int j = 0; j < i-k; j++) {
//        if ((int)temp[j] > (int)temp[j+1]) {
//          char copy = temp[j];
//          temp[j] = temp[j+1];
//          temp[j+1] = copy;
//        }
//      }
//    }
    //range from i+1 to temp.size()-1
    //second part sort
    //0 1 2 3 - 4 5 6
    //a c m i - c p c
    //i = 0
    sort(temp.begin()+i+1, temp.end());
    //
//    for (int k = i+1; k < temp.size()-1; k++) {
//      for (int j = i+1; j < temp.size()-k+i; j++) {
//        if (temp[j] > temp[j+1]) {
//          char copy = temp[j];
//          temp[j] = temp[j+1];
//          temp[j+1] = copy;
//        }
//      }
//    }
    if (min > temp)
      min = temp;
  }
  cout << min << endl;
  return 0;
}

