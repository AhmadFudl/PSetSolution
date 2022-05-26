/*
 _____________________________________
<          Welcome to WEEK 5          >
<        Programming Functions        >
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

using namespace std;

int computematrix(int a[], int ln) {
}


int main() {
  int a[10] = {11,1,1,1,1,1,1,1,1,1};
  cout << computematrix(a, 10) << endl;
  return 0;
}

string cont(const string &a, const string &b) {
  return a+b;
}
