#include <iostream>
using namespace std;
int main () {
    char a='A', b='B';
    int n;
    cin>>n;
   for(int i=0; i<n; i++){
            for(int j=0; j<2*n; j++) {
             if(i==0 || i==n-1) 
                cout<<a;
                else if(j==0 || j==n*2-1)
                        cout<<a;
                 else 
                        cout<<b;
            }
         cout<<endl;
     }
return 0;
}