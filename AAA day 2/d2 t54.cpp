
#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if((x<5 && y<5) || (x<5 && z<5) || (y<5 && z<5))
    cout<<"yes"<<endl;
    else if(x<5 && y<5 && z<5)
    cout<<"no"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}