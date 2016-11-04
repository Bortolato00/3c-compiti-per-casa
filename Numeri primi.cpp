#include <iostream>
using namespace std;
int main (){
    double n = 0;
    int div;
    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;
    div = n-1;
    if (n != 1){

        while ((int)n % div != 0){
            div = div - 1;
         }

        if (div == 1){
            cout << "Il numero e' primo!";

        }else {
            cout << "Il numero non e' primo!";
        }

    }else {
        cout << "Il numero e' primo!";
    }
    cout << endl;
}
