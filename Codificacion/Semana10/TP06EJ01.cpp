#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar 10 números y guardarlos en un vector.

Determinar e informar cuál es la suma de los valores del vector.
*/

int main(){

    /// DECLARO CONSTANTE ENTERA Y DECLARO UN VECTOR DE 10 ELEMENTOS
    const int TAM = 10;
    int vNumeros[TAM];

    /// DECLARO VARIABLE ACUMULADORA EN 0
    int acumulador = 0;

    /// LEO Y GUARDO EN EL VECTOR LOS NUMEROS INGRESADOS
    for(int i = 0; i < TAM; i++){
        cin >> vNumeros[i];
    }

    /// LEO EL VECTOR Y ACUMULO SUS VALORES
    for(int w = 0; w < TAM; w++){
        acumulador += vNumeros[w];
    }

    cout << endl << endl;

    /// MOSTRAR LA SUMA DE LOS VALORES DEL VECTOR
    cout << "La suma es: " << acumulador;

return 0;

}
