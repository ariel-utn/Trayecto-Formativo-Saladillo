#include <iostream>

using namespace std;

int main()
{

    int nroPlan;
    float precioContado, precioTarjeta;
    int nroLocal, cantPasajeros, codPago;

    float vContado[20];
    float vTarjeta[20];

    /// PTO A
    float precio;
    float recContado = 0;
    float recTarjeta = 0;

    /// PTO B
    int vPlan[20]{};
    int maximo = 0;
    int maximoPlan;


    /// LOTE DE CARGA

    for(int i = 1; i <= 20; i++)
    {
        cout << "Ingrese Nro plan: ";
        cin >> nroPlan;

        cout << "Ingrese precio contado: ";
        cin >> precioContado;

        cout << "Ingrese precio tarjeta: ";
        cin >> precioTarjeta;

        vContado[nroPlan-1] = precioContado;
        vTarjeta[nroPlan-1] = precioTarjeta;
    }

    /**
    system("cls");
    cout << "# Plan\tCont. $\tTarj. $" << endl;
    for (int x = 0; x < 20; x++){
        cout << x+1 << "\t" << vContado[x] << "\t" << vTarjeta[x] << endl;


    }
    cout << endl << endl;
    cout << "Precio contado plan 13: " << vContado[12] << endl;

    */


    /// LOTE DE REGISTROS VENTAS

    cout << "Ingrese Nro local: ";
    cin >> nroLocal;

    while(nroLocal != 9)
    {
        cout << "Ingrese Nro plan: ";
        cin >> nroPlan;

        cout << "Ingrese cantidad pasajeros: ";
        cin >> cantPasajeros;

        cout << "Ingrese codigo pago: ";
        cin >> codPago;

        /// PTO A
        if(codPago==1){
            /// CONTADO
            precio = vContado[nroPlan-1];
            recContado += precio*cantPasajeros;
        }
        else{
            /// TARJETA
            precio = vTarjeta[nroPlan-1];
            recTarjeta += precio*cantPasajeros;
        }

        /// PTO B
        vPlan[nroPlan-1]+=cantPasajeros;

        ///
        cout << "Ingrese Nro local: ";
        cin >> nroLocal;

    }

    system("cls");
    cout << "PTO A: Recaudacion contado $: " << recContado << endl;
    cout << "PTO A: Recaudacion tarjeta $: " << recTarjeta << endl;


        /// PTO A
    for(int i = 0; i < 20; i++){
        if(vPlan[i] > maximo){
            maximo = vPlan[i];
            maximoPlan = i + 1 ;
        }
    }
    cout << endl;

    cout << "PTO B: El plan mas elegido: " << maximoPlan << endl;
    return 0;
}
