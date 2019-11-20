#include <iostream>
using namespace std;
int main () {
    float ruble,perevod,konfety;
    cin>>ruble;
    for(int i=1; i<=100; i++)
    {
        perevod=i*ruble;
        konfety=perevod/20;
        cout<<i<<'$'<<'-'<<perevod<<'p'<<'-'<<konfety<<"kg"<<endl;
    }
    return 0;
}