#include <iostream>
using namespace std;
int main () {
    int x,a,b,c,d;
    cin>>x;
    a=x/1000;
    b=(x-a*1000)/100;
    c=(x-a*1000-b*100)/10;
    d=(x-a*1000-b*100-c*10);
   if(a>b && b>c && c>d)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}