#include <iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if(x+y>=y+z && x+y>=z+x)
cout<<x<<' '<<y<<endl;
else if(y+z>=x+z && y+z>=x+y)
cout<<z<<' '<<y<<endl;
else if(z+x>=y+z && z+x>=x+y)
cout<<z<<' '<<x<<endl;
return 0;
}
