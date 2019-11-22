#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int n= rand() % 10 + 3;
    char line[n];
    for (int i = 0; i < n; i ++){
        line[i] = (char)(rand() % 122 + '"');
    }

    for ( int i = 0; i < 1; i++){
        int a = rand() % n;
        int b = rand() % n;
        k:
             if (b==a){
                b=rand()%n;
                 goto k;
             }
        line[a] = '!';
        line[b] = '!';
    }

    for (int i = 0 ; i < n; i++){
        cout << line[i] << " ";
    }
    return 0;
}