#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b,c,S,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c)); 
    if(a+b>c && b+c>a && a+c>b)
        cout<<S<<endl;
    else
    cout<<"Does not exist"<<endl;
}