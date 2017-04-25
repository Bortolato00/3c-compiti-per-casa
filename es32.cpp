#include <iostream>
using namespace std;
void spostamento(int v [], int dim, int posizione, int elemento);
int dimensione (int dim);
int main (){
    int dim = 3;
    int elemento;
    int posizione;
    int v[dimensione(dim)];
    for (int i = 0; i < dim; i++){
        cout << "Immetti il valore numero " << i+1 << ": ";
        cin >> v[i];
    }
    spostamento(v, dim, posizione, elemento);
    for (int k = 0; k < dim; k++){
        cout << "Posizione numero" << k+1 << " corrisponde a: " << v[k] << endl;
    }
}
void spostamento (int v [], int dim, int posizione, int elemento){
    cout << "Che elemento vuoi inserire?" << endl;
    cin >> elemento;
    cout << "In che posizione vuoi metterlo?" << endl;
    cin >> posizione;
    v[posizione-1] = elemento;
}
int dimensione(int dim){
    do{
        cout << "Immetti dimensione: ";
        cin >> dim;
        if (dim < 0 || dim > 50){
            cout << "La dimensione deve essere compresa tra 0 e 50" << endl;
        }
    }while (dim < 0 || dim > 50);
}
