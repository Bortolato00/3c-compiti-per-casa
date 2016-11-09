#include <iostream>
#include <windows.h>
using namespace std;
int main (){
    int n;
    double minore;
    double maggiore;
    double somma;
    cout << "Quanti numeri vuoi immettere?" << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        system ("CLS");
        double x;
        cout << "Numeri immessi fin'ora: " << i << endl << endl;
        cout << "Immetti il numero: ";
        cin >> x;
        if (i == 0){
            minore = x;
            maggiore = x;
        } else {
            if (x < minore){
                minore = x;
            } else if (x > maggiore){
                maggiore = x;
            }
        }
        somma = somma + x;
    }
    cout << "Il numero minore e': " << minore << endl;
    cout << "Il numero maggiore e': " << maggiore << endl;
    cout << "La media e': " << somma/n << endl << endl;
    system ("PAUSE");
}
