#include <iostream>
using namespace std;
int main () {
    string a="AAA", b="BBB";
    int n,m;
    cin>>n>>m;
   for(int i=0; i<n; i++){
       if(i%2==0){
             for(int j=0; j<m; j++){
                 cout<<a<<b;
        }
       }
   else {
        for(int j=0; j<m; j++){
            cout<<b<<a;
        }
   }
       cout<<endl;
   }
return 0;
//I am not sure, that I understood this task right
}