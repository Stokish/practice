#include <iostream>
using namespace std;
int main(){
int x;
cin>>x;
if(x>=2 && x<=5)
{
x+=10;
}
else if(x>=7 && x<=40) 
    {
    x-=100;
    }
else if(x<=0 || x>3000)
{
    x=3*x;
}
else 
x=0;
cout<<x<<endl;
return 0;
}
