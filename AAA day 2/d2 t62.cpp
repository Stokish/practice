#include <iostream>
using namespace std;
int main () {
    int x,a,b;
    cin>>x;
     a= (x - x/10000 * 10000) / 1000;
     b= (((x - x/10000 * 10000) - a * 1000) - ((x - x/10000 * 10000) - a * 1000)/100 * 100 ) / 10;
     x= x - a* 1000 - b * 10;
    cout<<x<<endl;
    return 0;
}