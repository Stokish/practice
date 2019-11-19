#include <iostream>
using namespace std;
int main () {
    int dir, command;
    cin >> dir;
    cin >> command;
    switch(command) {
        case 1: switch(dir) {
            case 11: cout<<"West";
                             break;
            case 12: cout<<"South"; 
                             break;
            case 13: cout<<"East"; 
                             break;
            case 14: cout<<"North"; 
                             break;
        }
            break;
        case -1: switch(dir) {
            case 11: 
                    cout<<"East";
                     break;
            case 12:
                    cout<<"North";
                     break;
            case 13:
                    cout<<"West";
                     break;
            case 14:
                    cout<<"South";
                     break;
        }
            break;
        case 0: switch(dir) {
            case 11:
                    cout<<"North";
                        break;
            case 12: 
                    cout<<"West"; 
                        break;
            case 13:
                    cout<<"South"; 
                        break;
            case 14:
                    cout<<"East";
                        break;
        }
            break;
        default: 
                cout << "No direction";
                 break;
    }
    return 0;
}