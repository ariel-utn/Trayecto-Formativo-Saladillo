#include <iostream>

using namespace std;

int  main()
{
    int codArticulo, dia, cantidadVendida;

    /// PTO A
    int vCantVendPorArt[200]{};

    /// PTO B
    ///bool vDiasSinVenta[31]{};
    int vDiasSinVenta[31]{};

    /// PTO C
    int contVentas = 0;
    int acuUnidadesVendidas = 0;
    float promedio;


    cout << "Ingrese codigo articulo: ";
    cin >> codArticulo;

    while (codArticulo != 0) {


        cout << "Ingrese dia: ";
        cin >> dia;

        cout << "Ingrese cantidad vendida: ";
        cin >> cantidadVendida;

        /// PROCESAMIENTO DE REGISTROS DE VENTAS

        /*
        switch(codArticulo){
        case 1:
            vCantVendPorArt[0] += cantidadVendida;
            break;
        case 2:
            vCantVendPorArt[1] += cantidadVendida;
            break;
        case 3:
            vCantVendPorArt[2] += cantidadVendida;
            break;
        }
        */

        /// PTO A
        vCantVendPorArt[codArticulo-1] += cantidadVendida;

        /// PTOB
        vDiasSinVenta[dia-1] += cantidadVendida;
        ///vDiasSinVenta[dia-1] = 1;

        /// PTO C
        contVentas++;
        acuUnidadesVendidas+=cantidadVendida;

        cout << "Ingrese codigo articulo: ";
        cin >> codArticulo;
    }

    system("cls");
    cout << endl << endl;
    cout << "PTO A" << endl;
    cout << "Art.#\tCant." << endl;
    for(int i = 0; i < 200; i++){
        if(vCantVendPorArt[i] > 0)
        cout << i + 1 << "\t" << vCantVendPorArt[i] << endl;
    }

    cout << endl << endl;
    cout << "PTO B" << endl;
    for(int j = 0; j < 31; j++){
        if(vDiasSinVenta[j] == 0){
            cout << "Dia " << j + 1 << " sin ventas" << endl;
        }
    }

    cout << endl << endl;
    cout << "PTO C" << endl;
    if(contVentas > 0){
        promedio = (float)acuUnidadesVendidas/contVentas;
        //cout << "Promedio: " << promedio << endl;
        for(int x = 0; x < 200; x++){
            if(vCantVendPorArt[x] > promedio){
                cout << "Articulo # " << x + 1 << endl;
            }
        }
    }
    else{
        cout << "No hubo ventas" << endl;
    }
    return 0;
}
