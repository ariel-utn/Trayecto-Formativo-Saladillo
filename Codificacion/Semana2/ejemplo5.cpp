/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**

    AND ==>  &&
    V && V = V
    F && V = F
    V && F = F
    F && F = F

    OR ==>  ||
    V || V = V
    F || V = V
    v || F = V
    F || F = F


    NOT ==>  !
    !V = F
    !F = V

*/

/**
Para considerar sospecha de Gripre es necesario
tener temperatura mayor 37.5 °C y dolor de cabeza.

*/

#include <iostream>

using namespace std;

int main()
{

    float temp;
    char  dc;
    cout << "Ingrese temperatura: ";
    cin >> temp;
    cout << "Ingrese dolor cabeza [S -> si, N -> no]: ";
    cin >> dc;
    if (temp > 37.5 && dc == 'S') {
        cout << "Posible Gripe";
    }
    else {
        cout << "Sin gripe";
    }


    return 0;
}
