#include <iostream>
using namespace std;
int main () {
    int x;
    cin>>x;
   if(x/1000==x%10 && (x/100-x/1000*10==x%100/10))
   cout<<"yes"<<endl;
   else 
   cout<<"no"<<endl;
}