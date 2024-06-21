#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nroVendedor;
    float importe;

    /// PTO A
    float vRec[15] = {};
    float maximo = 0;
    int maximoVendedor;

    /// PTO B
    bool vVentas[15] {};

    /// PTO C
    float recTotal = 0;

    cout << "Ingrese vendedor: ";
    cin >> nroVendedor;

    while (nroVendedor != 0)
    {
        cout << "Ingrese importe: ";
        cin >> importe;

        /// PTO A
        vRec[nroVendedor-1]+=importe;

        /// PTO B
        vVentas[nroVendedor-1] = true;

        /// PTO C
        recTotal += importe;

        cout << "Ingrese vendedor: ";
        cin >> nroVendedor;
    }

    /// PTO A
    for(int i = 0; i < 15; i++){
        if(vRec[i] > maximo){
            maximo = vRec[i];
            maximoVendedor = i + 1 ; /// ERROR USAR nroVendedor
        }
    }

    system("cls");
    cout << "PTO A: El número de vendedor que más vendió en total (en $): " << maximoVendedor << ". Recaudó: " << maximo << endl;

    cout << endl;

    for(int i =0; i < 15; i++){
        if(vVentas[i]==false){
            cout << "PTO B: Número de vendedor sin ventas: " << i + 1 << endl;
        }
    }

    cout << endl;

    cout << "PTO C: El total recaudado por la empresa: " << recTotal << "$" << endl;


    return 0;
}
