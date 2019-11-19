#include <iostream>
using namespace std;
int main () {
    int x,a,b,c,d;
    cin>>x;
    a=x/1000;
    b=(x-a*1000)/100;
    c=(x-a*1000-b*100)/10;
    d=(x-a*1000-b*100-c*10);
   if(a==b || a==c|| a==d || b==c || b==d || c==d)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}