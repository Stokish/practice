#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b,c,x,D;
    cin>>a>>b>>c;
   D=b*b-4*a*c;
    if(a==0)
        x=-c/b;
    else if(D>0)
     { 
         x=(-b+sqrt(D))/(2*a);
        cout<<x<<endl;
        x=(-b-sqrt(D))/(2*a);
        cout<<x<<endl;
     }
     else if(D<0)
     cout<<"No answer"<<endl;
    return 0;
}