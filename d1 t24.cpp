#include <iostream>
#include <cmath>
using namespace std;
int main(){
double day, sale, sum;
cin>>day>>sale>>sum;
int i=0;
while(i<day)
{
sum+=3;
sum=(sum*sale)/100+sum;
i++;
}
cout<<sum<<endl;
    return 0;
}
