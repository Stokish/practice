#include <iostream>
using namespace std;
int main () {
    for(int i=11; i<=9999; i++) {
        for(int j=2; j<=10;j++)
        {
        if(i%11==0 && i%j==1){
        cout<<i<<endl;
        break;
         }
        }
    }
    return 0;
}