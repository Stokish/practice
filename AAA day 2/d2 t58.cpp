#include <iostream>
using namespace std;
bool calendar( int *x, int *y, int *z)
{
    if(*x>0 && *z>=0)
    {
    switch(*y)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        if(*x<=31)
            return true;
        else 
             return false;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
             if(*x<=30)
                return true;
            else 
                return false;
        break;
        case 2:
            if(*x<=29 && *z%4==0 )
             { if (*z%100!=0)
                return true;
            else if(*z%100==0)
                {
                    if(*z%400==0)
                        return true;
                    else 
                    return false;
                }
             }
            else if(*x<=28 && *z%4!=0)
                     return true;
                else return false;
        break;
        default:
        return false;
        }
    }
    else 
    return false;
}
int main()
{
    int day,month,year;
    cin>>day>>month>>year;
    int day1, month1,year1;
    cin>>day1>>month1>>year1;
    bool b=calendar(&day, &month, &year);
    if (b==true)
        b=calendar(&day1, &month1, &year1);
    if (b==false)
        cout<<"such dates do not exist"<<endl;
    else{ 
        if(year<year1)
        cout<<"yes"<<endl;
        else if (year==year1)
        { 
         if(month<month1)
            cout<<"yes"<<endl;
            else if(month==month1)
            {
                if(day<day1) 
                 cout<<"yes"<<endl;
                 else
                 cout<<"no"<<endl;
            }
            else
              cout<<"no"<<endl;
        }
        else
         cout<<"no"<<endl;
    }
    return 0;
}