#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n = 0;
    int div;
    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;
    div = (int)sqrt(n);
    if (n != 1){
        while (n % div != 0){;
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
