#include <iostream>
#include <cmath>
using namespace std;
int main () {
  double p=1,a,n;
  cin>>a>>n;
  for(double i=1; i<=n; i++) {
      p=pow(a+i,2)*p;
  }
  cout << p << endl;
    return 0;
}