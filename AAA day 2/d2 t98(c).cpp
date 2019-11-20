#include <iostream>
using namespace std;
int main () {
    double n,beg=10000,sum=10000;
    cin>>n;
    for(int i=1; i<n; i++) {
        beg+=beg/10.0;
        sum+=beg;
    }
    cout<<sum<<" m"<<endl;
    return 0;
}