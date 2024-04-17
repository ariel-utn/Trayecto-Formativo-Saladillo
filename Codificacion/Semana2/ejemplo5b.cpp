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

Para considerarse de riesgo para Gripe es necesario
tener edad mayor a 80 o estar inmunosuprimido.


*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char  inm;

    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Es inmunodeprimido [S -> si, N -> no]:";
    cin >> inm;

    if (edad > 80 || inm == 'S')
    {
        cout << "Riesgo de Gripe";
    }
    else
    {
        cout << " Bajo riesgo  gripe ";
    }


    return 0;
}
