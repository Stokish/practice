
#include <iostream>
using namespace std;
int main()
{
    int day,month,z, k=0;
    cin>>day>>month>>z;
    if(day>0 && z>=0)
    {
    switch(month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        if(day<=31)
            cout<<"yes"<<endl;
        else 
            cout<<"no"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
             if(day<=30)
                cout<<"yes"<<endl;
            else 
                cout<<"no"<<endl;
        break;
        case 2:
               if(day<=29 && z%4==0 )
             	  { if (z%100!=0)
                	cout<<"yes"<<endl;
               	   else if(z%100==0)
              	   {
                    if(z%400==0)
                    cout<<"yes"<<endl;
                    else 
                    cout<<"no"<<endl;
                   }
             }
            else if(day<=28 && z%4!=0)
                cout<<"yes"<<endl;
                else cout<<"no"<<endl;
        break;
        default:
        cout<<"no"<<endl;
        }
    }
    else 
    cout<<"no"<<endl;
    return 0;
}