#include <iostream>
#include <cmath>
using namespace std;
int main () {
  int sm=0,n;
  cin>>n;
  for(int i=1; i<=n; i++) {
      sm+=pow(i,2);
  }
  cout << sm << endl;
    return 0;
}