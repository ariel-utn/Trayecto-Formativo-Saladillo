#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de 10 números.

Luego informar
    - cuántos son positivos,
    - cuántos son negativos, y
    - cuántos iguales a cero.

Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

int main(){

    int num, i;
    int contPos, contNeg, contCero;

    contPos = contNeg = contCero = 0;

    for (i = 1; i <= 10; i++){
        cout << "Ingrese #: ";
        cin >> num;
        /**
        if(num > 0){
            contPos++;
        }
        if (num < 0){
            contNeg++;
        }
        if (num == 0){
            contCero++;
        }
        */
        if( num > 0){
            contPos++;
        }
        else{
            if( num < 0){
                contNeg++;
            }
            else{
                contCero++;
            }
        }

    }

    cout << "Total positivos: " << contPos << endl;
    cout << "Total negativos: " << contNeg << endl;
    cout << "Total ceros: " << contCero << endl;


return 0;

}
