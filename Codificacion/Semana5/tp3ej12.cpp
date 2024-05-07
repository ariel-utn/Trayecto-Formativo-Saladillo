#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de 10 números e informar el
máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo
Positivo 2.
*/

int main(){

    int j, num, minimoPositivo, maximoNegativo, posMaxNeg, posMinPos;
    int contPos = 0, contNeg = 0;

    for( j = 1; j <= 10; j++ ){
        cout << "Ingrese #: ";
        cin >> num;

        if( num > 0){
            contPos++;
            if( (contPos == 1) || (num < minimoPositivo) ){
                minimoPositivo = num;
                posMinPos = j;
            }
        }
        if( num < 0){
            contNeg++;
            if( (contNeg==1) || (num > maximoNegativo) ){
                maximoNegativo = num;
                posMaxNeg = j;
            }
        }
    }
    cout << "Minimo positivo: " << minimoPositivo << " en la posicion " << posMinPos << endl;
    cout << "Maximo negativo: " << maximoNegativo << " en la posicion " << posMaxNeg << endl;


return 0;

}
