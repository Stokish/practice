#include <iostream>
#include <ctime>
using namespace std;
int main () {
    int s=0, n;
    srand(time(0));
    n=rand()%100+11;
    while (s<=n) {
        int a=rand()%2;
        cout<<a<<" ";
        s+=a;
    }
    return 0;
}
