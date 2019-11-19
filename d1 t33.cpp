#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x,y,k;
cin>>x>>y;
if( y>=0 && x>=sqrt(y))
    {
    k=sqrt(x-sqrt(y));
    cout<<k<<endl;
    }
else 
    {
        cout<<"Error"<<endl;
    }
return 0;
}
