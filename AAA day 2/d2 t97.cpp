#include <iostream>
using namespace std;
int main () {
    int n,p=0,i=1;
    cin>>n;
    int a=1;
    for(i=1; i<=n; i++) 
	{
          for(int j=i; j<=2*i; j++) 
		{
            	a*=j;
        	}
       	 p+=a;
       	 a=1;
    	}
    cout << p << endl;
    return 0;
}