#include <iostream>
using namespace std;
int main()
{
    int x,y,z,k,mx=-2147483640;
    cin >>x>>y>>z>>k;
    if (x%2==0||y%2==0||z%2==0||k%2==0)
    {
      if (x%2==0)
         mx = x;
      if (y%2 == 0 && y>mx)
          mx = y;
      if (z%2 == 0 && z>mx)
          mx = z;
      if (k%2 == 0 && k>mx)
          mx=k;
       cout<<mx<<endl;
    }
    else
    {
        cout<<"Not found";
    }
}
