/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**
    Hacer un programa para ingresar la letra de un color de semaforo
    y luego indicar que accion debe hacer el peaton.

*/

#include <iostream>

using namespace std;

int main()
{

    char colorSemaforo;

    cout << "Ingrese color del semaforo: ";
    //cout << "R -> rojo, A -> amarillo, V -> verde";
    cin >> colorSemaforo;

    /// TOUPPER() --> convierte a MAYUSCULA
    /// TOLOWER() --> convierte a minuscula

    switch(colorSemaforo){
    case 'R':
        cout << "Prohibido el paso" << endl;
        break;
    case 'A':
        cout << "Precuacion al cruzar" << endl;
        break;
    case 'V':
        cout << "Puede cruzar" << endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }

    return 0;
}
