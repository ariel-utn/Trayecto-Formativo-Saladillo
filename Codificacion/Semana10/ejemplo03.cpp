#include <iostream>
using namespace std;

int main()
{
    int tipoPieza, cantidadProducida;

    /// DECLARO VECTOR DE 50 ELEMENTOS Y LO INICIALIZO EN CERO
    const int TAM = 50;
    int vCantProd[TAM] {};

    cout << "Tipo de pieza: ";
    cin >> tipoPieza;

    while( tipoPieza != 0 )
    {
        cout << "Cantidad producida: ";
        cin >> cantidadProducida;

        cout << endl;

        /// ACUMULO CANTIDAD PRODUCIDA SEGUN TIPO DE PIEZA
        vCantProd[tipoPieza-1]+=cantidadProducida;

        cout << "Tipo de pieza: ";
        cin >> tipoPieza;
    }

        /// MOSTRAR CONTENIDO DEL VECTOR
    for(int i= 0; i < TAM; i++ )
    {
        cout << "Pieza #" << i+1 <<": " << vCantProd[i] << " unidades" << endl;
    }

    return 0;

}
