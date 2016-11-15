#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main (){
    cout << "------------------------------------ES. 14-------------------------------------" << endl;
    cout << "Immetti le dimensioni dei lati del rettangolo: " << endl;
    double a;
    double b;
    cout << "base: ";
    cin >> a;
    cout << "altezza: ";
    cin >> b;
    cout << endl;
    int scelta;
    do {
        cout << "Cosa vuoi sapere del rettangolo in questione?" << endl;
        cout << "[1] -> Area" << endl << "[2] -> Perimetro" << endl << "[3] -> Diagonale" << endl;
        cout << "La tua scelta: ";
        cin >> scelta;
        if (scelta != 1 && scelta != 2 && scelta != 3){
            system ("CLS");
            cout << "Immetti una rispsta valida"<< endl;
        }
    } while (scelta != 1 && scelta != 2 && scelta != 3);
    system ("CLS");
    switch (scelta){
    case (1):
        cout << "L'area del rettangolo e': " << a*b << endl << endl;
        break;
    case (2):
        cout << "Il perimetro del rettangolo e': " << 2*(a+b) << endl << endl;
        break;
    case (3):
        cout << "La diagonale del rettangolo e': " << sqrt((a*a)+(b*b)) << endl << endl;
    }
    system ("PAUSE");
}
