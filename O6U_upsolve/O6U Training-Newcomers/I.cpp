#include <iostream>
using namespace std ;
int main () {
   long long a,b;
   // 1 1
   cin>>b>>a;
   if (b%a==0 || a%b == 0)
   cout<<"Multiples" << endl;
   else
   cout<<"no Multiples" << endl;
   return 0;
}

