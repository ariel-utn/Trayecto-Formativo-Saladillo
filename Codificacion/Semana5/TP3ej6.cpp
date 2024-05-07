#include <iostream>
using namespace std;


/**
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista. Luego solicitar se ingresen esos N números.

Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4.

Se listará: Cantidad de Positivos: 4

Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.

Se listará: Cantidad de Positivos: 0
*/

int main(){

    int cantidadNumerosLista, i, num;
    int contPositivos = 0;

    cout << "Ingrese cantidad de numeros que compone su lista: ";
    cin >> cantidadNumerosLista;

    for(i = 1; i <= cantidadNumerosLista; i++){

        cout << "Ingrese #: ";
        cin >> num;

        if( num > 0 ){
            contPositivos++;
        }
    }

    cout << "Cantidad de numeros positivos: " << contPositivos << endl;




return 0;

}
