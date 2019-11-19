#include <iostream>
using namespace std;
int main () {
    int x,a,b,c;
    cin>>x;
    a=x/100;
    b=(x-a*100)/10;
    c=x-a*100-b*10;
    x=c*100+b*10+a;
    cout<<x<<endl;
    return 0;
}