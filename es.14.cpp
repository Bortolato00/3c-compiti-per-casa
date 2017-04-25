#include <iostream>

using namespace std;
void vettori_non_ordinati (int primo[], int secondo [], int dim1, int dim2);
void vettori_ordinati (int primo[], int secondo [], int dim1, int dim2);
int main(){
    int primo[] = {-2,1,0,5,6,8};
    int secondo[] = {-3,-1,0,1,4,5,6,6,7,10};
    int dim1 = 7;
    int dim2 = 10;
    vettori_non_ordinati(primo, secondo, dim1, dim2);
    cout << endl;
    vettori_ordinati (primo, secondo, dim1, dim2);
}

void vettori_non_ordinati(int primo[], int secondo [], int dim1, int dim2){
for (int i = 0; i < dim1; i++){
        for (int k = i+1; k < dim2; k++){
            if (primo[i] == secondo[k]){
                cout << "La casella numero " << i << " contiene lo stesso valore della casella " << k << endl;
            }
        }
    }
}

void vettori_ordinati (int primo[], int secondo [], int dim1, int dim2){
    int k = 0;
    for (int i = 0; i < dim1;){
        if (primo [i]> secondo[k] && k < dim2){
            if (primo[i] == secondo[k]){
                cout << "La casella numero " << i << " contiene lo stesso valore della casella " << k << endl;
            k++;
        } else if (primo [i] > secondo[k] && k < dim2)
            if (primo[i] == secondo[k]){
                cout << "La casella numero " << i << " contiene lo stesso valore della casella " << k << endl;
            i++;
        }
    }
}
}
