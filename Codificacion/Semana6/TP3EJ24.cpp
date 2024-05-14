#include <iostream>
using namespace std;

/**
Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
-A- El sueldo máximo.
-B- El sueldo mínimo.
-C- El sueldo promedio.
-D Cantidad de sueldos mayores a $50000.

*/

int main(){

    float sueldo;
    int i;

    /// PTO A
    float maxSueldo = 0;

    /// PTO B
    float minSueldo; ///  = 10000000;

    /// PTO C
    float acuSueldo = 0, promedio;

    /// PTO D
    int cantSueldo = 0;

    for(i =1; i <= 10; i++){
        cout << "Ingrese sueldo #" << i << ": ";
        cin >> sueldo;

        /// PTO A
        if(sueldo > maxSueldo){
            maxSueldo = sueldo;
        }

        /// PTO B

        if(i == 1){
            minSueldo = sueldo;
        }
        else if(sueldo < minSueldo){
            minSueldo = sueldo;
        }

        /// PTO C
        ///acuSueldo = acuSueldo + sueldo;
        acuSueldo += sueldo;

        /// PTO D
        if (sueldo > 50000){
            cantSueldo++;
        }
    }

    /// PTO A
    cout << "PTO A) Sueldo maximo: " << maxSueldo << endl;

    /// PTO B
    cout << "PTO B) Sueldo minimo: " << minSueldo << endl;

    /// PTO C
    promedio = acuSueldo/10;
    cout << "PTO C) Sueldo promedio: " << promedio << endl;

    /// PTO D
    cout << "PTO D) La cantidad sueldos > 50000 es: " << cantSueldo << endl;


return 0;

}
