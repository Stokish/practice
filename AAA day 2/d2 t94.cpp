#include <iostream>
#include <cmath>
using namespace std;
int main () {
  double sm=0,n;
  cin>>n;
  for(double i=1; i<=n; i++) {
      sm+=1/i;
  }
  cout << sm << endl;
    return 0;
}