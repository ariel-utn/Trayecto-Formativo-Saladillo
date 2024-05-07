#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de 10 n�meros.
Luego informar el m�ximo y el m�nimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13.
Se listar� M�ximo 42 M�nimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13.
Se listar� M�ximo 42 M�nimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13.
Se listar� M�ximo -5 M�nimo -42.

Observe que los tres ejemplos dejan en claro que la suposici�n de
que el m�ximo �seguramente� es un positivo y el m�nimo
�seguramente� es un negativo, queda totalmente descartada.
*/

int main(){

    int i;
    float num, maximo, minimo;

    for( i = 1; i <= 10; i++){
        cout << "Ingrese #: ";
        cin >> num;

        /**
        if(i == 1){
            maximo = num;
        }
        else{
            if (num > maximo){
                maximo = num;
            }
        }
        */
        if( (i==1) || (num > maximo) ){
            maximo = num;
        }
        if ( (i==1) || (num < minimo) ){
            minimo = num;
        }
    }
    cout << "El maximo es " << maximo << endl;
    cout << "El minimo es " << minimo << endl;


return 0;

}
