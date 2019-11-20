#include <iostream>
using namespace std;
int main () {
    int sm=1;
    int i=5;
    while(i<=13)
    {
        sm=i*sm;
        i++;
    }
    cout<<sm<<endl;
    return 0;
}