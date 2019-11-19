#include <iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if(x%3==0 && y%3==0 && x>10 && y>10 && z>10)
cout<<"Yes"<<endl;
else 
cout<<"No"<<endl;
return 0;
}
