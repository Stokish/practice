#include <iostream>
using  namespace std;
int main() {
    double gradus,m,h;
    cin>>h>>m;
    if(h<0 || m<0)
    {
        cout<<"Invalid time"<<endl;
        return 0;
    }
    if(m>=60)
    {   while(m>=60)
        {
            m-=60;
        h++;
        }
    }
    if(h>=12)
    {
        while(h>=12)
        {
            h-=12;
        }
    }
    h=h*60+m;
    gradus=abs((h*0.5)-(m*6));
    cout<<gradus<<endl;
 return 0;
}