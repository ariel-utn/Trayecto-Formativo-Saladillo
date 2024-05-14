#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de n�meros que finaliza
cuando se ingresa un cero.

Luego informar cu�ntos son positivos y cu�ntos son negativos.

Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.

*/

int main(){

    int num;
    int contPos = 0, contNeg = 0;

    cout << "Ingrese #: ";
    cin >> num;

    while (num != 0){
        if(num>0){
            contPos++;
        }
        else if (num<0){
            contNeg++;
        }
        cout << "Ingrese #: ";
        cin >> num;
    }
    cout << "Total de positivos: " << contPos << endl;
    cout << "Total de negativos: " << contNeg << endl;


return 0;

}
