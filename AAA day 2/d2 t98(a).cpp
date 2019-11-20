#include <iostream>
using namespace std;
int main () {
    double beg=10000;
    cout<<"1 day: "<<beg<<" m"<<endl;
    for(int i=1; i<10; i++) {
        beg+=beg/10.0;
        cout<<i+1<<" day: "<<beg<<" m"<<endl;
    }
    return 0;
}