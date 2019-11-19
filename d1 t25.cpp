#include <iostream>
#include <cmath>
using namespace std;
int main(){
double day, month, year;
cin>>day>>month>>year;
day=month*30+year*360+day;//in one year 12 month which means 12*30=[360]
cout<<day<<endl;
    return 0;
}
