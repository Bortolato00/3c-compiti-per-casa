#include <iostream>
#include <windows.h>
using namespace std;
int main (){
    int x;
    int centinaia = 0;
    int decine = 0;
    cout << "Immetti il numero: ";
    cin >> x;
    if (x > 999 || x < -999)
    if (x >= 0){
        while (x >= 100){
            x = x - 100;
            centinaia = centinaia + 1;
        } while (x >= 10){
            x = x - 10;
            decine = decine + 1;
        }
    }else {
        while (x <= -100){
            x = x + 100;
            centinaia = centinaia + 1;
        } while (x <= -10){
            x = x + 10;
            decine = decine + 1;
        }
        x = x*(-1);
    }
    cout << endl << "Le centinaia sono: " << centinaia << endl;
    cout << "Le decine sono: " << decine << endl;
    cout << "le unita' sono: " << x;
}
