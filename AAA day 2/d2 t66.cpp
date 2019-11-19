#include <iostream>
using namespace std;
int main () {
    int x,y,z;
    cin>>x>>y;
    x=(x-x%10)/10;
    
    y=(y-y%10)/10;
    z=x*100+y;
    cout<<z<<endl;
    return 0;
}