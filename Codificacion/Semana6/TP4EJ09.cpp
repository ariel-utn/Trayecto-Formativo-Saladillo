#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero.

Luego informar el m�ximo.

Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo -5.

*/


int main()
{
    int num, maxPar, posMaxPar;
    int contPar = 0, contNumeros = 0;

    cout << "Ingrese #: ";
    cin >> num;

    while( num != 0 )
    {
        contNumeros++;

        if(num%2==0)
        {
            /// PAR
            contPar++;
            if(contPar==1)
            {
                maxPar = num;
                posMaxPar = contNumeros;
            }
            else if(num > maxPar)
            {
                maxPar = num;
                posMaxPar = contNumeros;
            }
        }
    cout << "Ingrese #: ";
    cin >> num;
    }
    if(contPar > 0){
     cout << "El maximo par es: " << maxPar << " en la posicion " << posMaxPar << endl;
    }
    else{
        cout << "Lista sin numeros pares" << endl;
    }


return 0;
}


