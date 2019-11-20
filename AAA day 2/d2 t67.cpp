#include <iostream>
using namespace std;
int main(){
    int x,a[3],mx=4,mn=5,b;
    cin >> x;
    a[0]=x/1000;
    a[1]=(x/100)%10;
    a[2]=(x/10)%10;
    a[3]=x%10;
    a[mx]=-12345689;
    a[mn]=123456789;
    for(int i=0; i<4; i++)
    {
        if(a[mx]<a[i])
            mx=i;
        if(a[mn]>a[i])
             mn=i;
    }
    b=a[mx];
    a[mx]=a[mn];
    a[mn]=b;

    for(int i=0; i<4; i++)
    {
        cout<<a[i];
    }
    return 0;
}