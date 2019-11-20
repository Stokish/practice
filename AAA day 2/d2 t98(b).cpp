#include <iostream>
using namespace std;
int main () {
    double beg=10000,sum=10000;
    for(int i=1; i<7; i++) {
        beg+=beg/10.0;
        sum+=beg;

    }
    cout<<sum<<" m"<<endl;
    return 0;
}