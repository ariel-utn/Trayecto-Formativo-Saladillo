/**
Un negocio de perfumería efectúa descuentos según el importe de la
venta.

- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y
se informe por pantalla el importe con el descuento ya aplicado.

Importante: Verifique que el programa emita UN SOLO CARTEL.

*/


#include <iostream>
using namespace std;

int main(){

    float importeVenta, importeFinal;

    cout << "Ingrese importe de la venta: ";
    cin >> importeVenta;

    if(importeVenta < 100){
        /// 5%
        importeFinal = importeVenta*(0.95);
    }
    else{
        if(importeVenta > 500 ){
            /// 15%
            importeFinal = importeVenta*(0.85);
        }
        else{
            /// 10%
            importeFinal = importeVenta*(0.90);
        }
    }

    cout << "Importe final: " << importeFinal << endl;


return 0;

}
