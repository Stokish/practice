#include <iostream>
using namespace std;
int main () {
  double sm=0.0;
  for(double i=2.0; i<=9.0; i++) {
      sm+=(i/(i+1.0));
  }
  cout << sm << endl;
    return 0;
}