#include <iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if(x%5==0 && y%5!=0 && z%5!=0)
cout<<x<<endl;
else if(y%5==0 && x%5!=0 && z%5!=0 )
cout<<y<<endl;
else if(z%5==0 && x%5!=0 && y%5!=0)
cout<<z<<endl;
else if(x%5==0 && y%5==0 && z%5!=0)
cout<<x+y<<endl;
else if(x%5==0 && z%5==0 && y%5!=0)
cout<<x+z<<endl;
else if(y%5==0 && z%5==0 && x%5!=0)
cout<<y+z<<endl;
else if(y%5==0 && z%5==0 && x%5==0)
cout<<x+y+z<<endl;
else 
cout<<"Error"<<endl;
return 0;
}
