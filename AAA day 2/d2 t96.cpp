#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
  double p=0,x;
  cin>>x>>n;
  for(double i=1; i<=n; i++) {
      p+=1.0/cos(pow(x,i));
  }
  cout << p << endl;
    return 0;
}