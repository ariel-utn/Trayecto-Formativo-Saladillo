#include <iostream>
using namespace std;

/**
Una empresa registró las ventas que efectuó durante un día y para cada venta
registró los siguientes datos:
    ● Número de Artículo Vendido (1 a 3)
    ● Cantidad de Unidades Vendidas
    ● Importe de la Venta
El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
Se pide determinar e informar:

a) La recaudación total para cada uno de los 3 artículos. Se informan 3 resultados
al final.

b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se
informa 1 resultado al final.

*/


int main(){
    int articulo, cantidad;
    float importe;

    /// PTO A
    float acu1, acu2, acu3;
    acu1 = acu2 = acu3 = 0;

    /// PTO B
    int acuCv1, acuCv2, acuCv3;
    acuCv1 = acuCv2 = acuCv3 = 0;

    cout << "Articulo: ";
    cin >> articulo;

    /// NIVEL LOTE

    while (articulo != 0){
        cout << "Cantidad: ";
        cin >> cantidad;

        cout << "Importe: ";
        cin >> importe;

        /// NIVEL REGISTRO -> LEO TODOS LOS REGISTROS

        /// PTO A
        if(articulo==1){
            acu1 += importe;
            acuCv1 += cantidad;
        }
        else if (articulo==2){
            acu2 += importe;
            acuCv2 += cantidad;
        }
        else{
            acu3 += importe;
            acuCv3 += cantidad;
        }

    ///

    cout << "-----" << endl;

    cout << "Articulo: ";
    cin >> articulo;

    }

    /// NIVEL LOTE

    ///
    cout << "PTO A)" << endl;
    cout << "El articulo 1: " << ", recaudo $: " << acu1 << endl;
    cout << "El articulo 2: " << ", recaudo $: " << acu2 << endl;
    cout << "El articulo 3: " << ", recaudo $: " << acu3 << endl;

    cout << "PTO B)" << endl;
    if( (acuCv1 == acuCv2) && (acuCv1 == acuCv3) && (acuCv2 == acuCv3)){
        cout << "Todos los articulos vendieron la misma cantidad" << endl;
    }
    else{
        if( (acuCv1 > acuCv2) && (acuCv1 > acuCv3) ){
            cout << "El articulo mas vendido fue el ART 1" << endl;
        }
        else if( acuCv2 > acuCv3 ){
            cout << "El articulo mas vendido fue el ART 2" << endl;
        }
        else{
            cout << "El articulo mas vendido fue el ART 3" << endl;
        }
    }



return 0;

}
