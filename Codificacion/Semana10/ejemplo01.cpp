#include <iostream>
using namespace std;

int main()
{
    int tipoPieza, cantidadProducida;
    int acu1, acu2, acu3, acu4, acu5;
    acu1 = acu2 = acu3 = acu4 = acu5 = 0;

    cout << "Tipo de pieza: ";
    cin >> tipoPieza;

    while( tipoPieza != 0 )
    {
        cout << "Cantidad producida: ";
        cin >> cantidadProducida;

        cout << endl;
        ///
        switch( tipoPieza )
        {
        case 1:
            acu1 += cantidadProducida;
            break;

        case 2:
            acu2 += cantidadProducida;
            break;

        case 3:
            acu3 += cantidadProducida;
            break;

        case 4:
            /// acu4 = acu4 + cantidadProducida;
            acu4 += cantidadProducida;
            break;

        case 5:
            acu5 += cantidadProducida;
            break;
        }

        cout << "Tipo de pieza: ";
        cin >> tipoPieza;
    }

    cout << "Pieza #1: " << acu1 << " unidades" << endl;
    cout << "Pieza #2: " << acu2 << " unidades" << endl;
    cout << "Pieza #3: " << acu3 << " unidades" << endl;
    cout << "Pieza #4: " << acu4 << " unidades" << endl;
    cout << "Pieza #5: " << acu5 << " unidades" << endl;

    return 0;

}
