#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main (){
    cout << "----------------------------------NUMERI PRIMI----------------------------------" << endl;


    cout << "Quanti numeri primi vui visualizzare?" << endl;
    int n;
    cin >> n;
    cout << endl;
    cout << "I primi " << n << " numeri primi sono: " << endl << endl;
    int x = 1;
    int i = 1;
    while (i <= n){

        int div;
        div = (int)sqrt(x); //per il crivello di eratstene è possibile verificare solo i numeri minri della radice del numero dato
        if (x != 1){

            while (x % div != 0){ //modo per verificare se un numero è primo
                div = div - 1;
            }

            if (div == 1){ //caso in cui è primo stampo il numero trovato e aumento di 1 il contatore
                cout << i << ")   " << x << "; " <<  endl;
                i++;
            }

        }else { //se x è uguale a 1 lo stampo e incremento il contatore
            cout << i << ")   " << x << "; " <<  endl;
            i++;
        }
        x = x+1;
    }
    cout << endl;
    system ("PAUSE");
}
