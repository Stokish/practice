#include <iostream>
using namespace std;
bool PrimeNum(int x) {
    for (auto i = 2; i < x; i++ ) {
        if (0 == x % i) {
            return false;
        } else {
            continue;
        }
    }
}
int main() {
    int n;
    cin >> n;
        for (int i = 1; i < n; i++) {
            if (PrimeNum(i) && PrimeNum(i + 2)) {
                cout << "Pair:" << i << ' ' << i + 2 << endl;
            }
        }
//I know my code finds pairs prime numbers till n, but not n pairs of prime number.
}