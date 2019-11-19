
#include <iostream>
using namespace std;
int main()
{
    int x,y,z, k;
    cin>>x>>y>>z>>k;
    if(x>5 && y>5 && z%6==0 && k%3!=0)
    cout<<"yes"<<endl;
    else 
    cout<<"no"<<endl;

    return 0;
}
