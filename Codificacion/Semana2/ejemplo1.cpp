/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**
Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de
cada una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>

using namespace std;

int main()
{

    int marca1, marca2, marca3, totalAlfajores;
    /// float totalAlfajores;
    float porc1, porc2, porc3;

    cout << "Ingrese cantidad marca #1: ";
    cin >> marca1;

    cout << "Ingrese cantidad marca #2: ";
    cin >> marca2;

    cout << "Ingrese cantidad marca #3: ";
    cin >> marca3;

    /// Calculo porcentajes de cada marca ==> uso regla de 3 simples. 1ro calculo la cantidad total

    totalAlfajores = marca1 + marca2 + marca3;

//    porc1 = (marca1*100.0)/totalAlfajores;
//    porc2 = (marca2*100.0)/totalAlfajores;
//    porc3 = (marca3*100.0)/totalAlfajores;

    /// CASTEO
    porc1 = (float)(marca1*100)/totalAlfajores;
    porc2 = (float)(marca2*100)/totalAlfajores;
    porc3 = (float)(marca3*100)/totalAlfajores;

    /// Mostrar los porcentales

    cout << "Porcentaje marca #1: " << porc1 << endl;
    cout << "Porcentaje marca #2: " << porc2 << endl;
    cout << "Porcentaje marca #3: " << porc3 << endl;

    return 0;
}
