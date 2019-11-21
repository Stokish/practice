#include <iostream>
using namespace std;
int main () {
    double a,b=123.0,k=0;
    while(b!=0)
     {
         cin>>a;
         k+=a;
         b=a;
     }
     cout<<k;
return 0;
}