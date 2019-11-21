#include <iostream>
using namespace std;
int main () {
    int a,b,c,d,e,s;
    for(int i=10000; i<99999; i++) {
        a =  i/ 10000;
        b = (i/ 1000 ) % 10;
        c = (i / 100) % 10;
        d = (i / 10) % 10;
        e = i % 10;
        s=a+b+c+d+e;
        if(s%4==0 && c%2!=0 && i%2==0)
            cout<<i<<endl;
    }
    return 0;
}