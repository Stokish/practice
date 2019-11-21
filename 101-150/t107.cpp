#include <iostream>
using namespace std;
int main () {
    int s;
    for(int i=10; i>0; i--)
    {
        int j=i;
        s+=i*j;
        while(j--){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    cout<<s;
    return 0;
}
