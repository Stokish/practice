#include <iostream>
#include <cmath>
using namespace std;
int main () {
  int sm=0;
  for(int i=3; i<=111; i=2+i) {
      sm+=cos(i/(i+2));
  }
  cout << sm << endl;
    return 0;
}