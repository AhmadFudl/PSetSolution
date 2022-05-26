/*
 _____________________________________
<          Welcome to WEEK 3          >
<          Programming Arrays         >
 -------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/

/*
Data types              bytes    MAX                                  , MIN
                                                                      
short              -> 2 bytes =  3*10^4  = 32,767                     , -32,767
unsigned short     -> 2 bytes =  6*10^4  = 65,535                     , 0
int                -> 4 bytes =  2*10^9  = 2,147,483,647              , -2,147,483,647
unsigned int       -> 4 bytes =  4*10^9  = 4,294,967,295              , 0
long long          -> 8 bytes =  9*10^18 = 9,223,372,036,854,775,807  , -9,223,372,036,854,775,807
unsigned long long -> 8 bytes =  1*10^19 = 18,446,744,073,709,551,616 , 0
*/

#include <iostream>
#include <stdlib.h>
#include <string>

#define put std::putchar
using std::cin;
using std::cout;
int num[1000];
// 1 >= a <= 10;
// n of a n = 100
int main() {
  /*

   0 1 2 3
   0 1 2 3
   0 1 2 3
  */
  int a[4][5];
  int b[5][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      a[i][j] = rand() % 5;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << a[i][j] << ' ';
    }
    cout << std::endl;
  }
  cout << std::endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << i << ',' << j << " ";
      b[i][j] = a[j][i];
    }
    cout << std::endl;
  }
  cout << std::endl;
  cout << std::endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << b[i][j] << ' ';
    }
    cout << std::endl;
  }
  cout << std::endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << a[j][i] << " ";
    }
    cout << std::endl;
  }
}
