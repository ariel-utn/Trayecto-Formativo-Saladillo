#include <iostream>
using namespace std;

/**
Una empresa registró las ventas que efectuó durante un día y para cada venta
registró los siguientes datos:
    ● Número de Artículo Vendido (1 a 30)
    ● Cantidad de Unidades Vendidas
    ● Importe de la Venta

El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0. En
el lote anterior no aparecen registros de los artículos que por alguna razón no se
hayan vendido durante el día. Los registros están agrupados por número de
artículo. Se pide determinar e informar:

a) La recaudación total para cada uno de los artículos vendidos. Se informa 1
resultado para cada uno de los grupos.

b) El número de artículo con mayor cantidad TOTAL de unidades vendidas.

*/

int main()
{

    int articulo, cantidad, anterior;
    float importe;

    /// PTO A
    float acuRecaudacion;

    /// PTO B
    int acuCantidad, maximoArticulo, maximoCantidad = 0;

    /// NIVEL LOTE

    cout << "Articulo: ";
    cin >> articulo;

    while ( articulo != 0)
    {
        /// NIVEL GRUPO

        /// PTO A
        acuRecaudacion = 0;

        /// PTO B
        acuCantidad = 0;

        anterior = articulo;

        while (articulo == anterior)
        {
            cout << "Cantidad: ";
            cin >> cantidad;

            cout << "Importe: ";
            cin >> importe;

            cout << "------" << endl;
            cout << endl;

            /// NIVEL REGISTRO

            /// PTO A
            acuRecaudacion += importe;

            /// PTO B
            acuCantidad += cantidad;

            ///
            cout << "Articulo: ";
            cin >> articulo;

        }

        /// NIVEL GRUPO

        cout << "PTO A)" << endl;
        cout << "El articulo " << anterior << " recaudo $: " << acuRecaudacion << endl;

        /// PTO B
        if(acuCantidad > maximoCantidad){
            maximoCantidad = acuCantidad;
            maximoArticulo = anterior;
        }
    }

    /// NIVEL LOTE

    cout << "PTO B)" << endl;
    cout << "El articulo " << maximoArticulo << " con " << maximoCantidad << " unidades" << endl;

    return 0;

}
