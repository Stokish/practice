#include <iostream>
using namespace std;
int main () {
    double beg=10000;
    for(int i=1; i<100; i++) {
        beg+=beg/10.0;
        if(beg>80000){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}