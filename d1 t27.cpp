#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b, c;
cin>>a>>b>>c;
int d=a, e=b;
a=a+b;
b=c-d;
c=d+e+c;
cout<<a<<' '<<b<<' '<<c<<endl;
    return 0;
}
