/// Nombre y Apellido:
/// Guia N�:
/// Ejercicio N�:
/// Enunciado:


#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    /// ESTRUCTURA SELECTIVA DOBLE
    if (num > 0) {
        /** Instrucciones si la condici�n es verdadera*/
        cout << "Es positivo" << endl;
    }
    else {
        /** Instrucciones si la condici�n es falsa*/
        cout << "No es positivo" << endl;
    }

    return 0;
}
