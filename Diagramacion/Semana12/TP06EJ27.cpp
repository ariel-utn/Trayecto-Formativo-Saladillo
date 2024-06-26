#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numeroTarifa, numeroCamion;
    float vImportePorKM[20];
    float kilometrosRecorridos;

    /// PTO A
    float vRecaudacionPorTarifa[20] {};
    float recParcial;

    /// PTO B
    float vRecaudacionPorCamion[100] {};

    /// PTO C
    float vKilometrosPorCamion[100] {};

    /// LOTE DE CARGA

    for(int i = 1; i <= 20; i++)
    {
        cout << "Ingrese numero tarifa: ";
        cin >> numeroTarifa;

        cout << "Ingrese importe: ";
        cin >> vImportePorKM[numeroTarifa-1];
    }

    /// LOTE DE REGISTROS

    cout << "Ingrese numero camion: ";
    cin >> numeroCamion;

    while ( numeroCamion > -1)
    {
        cout << "Ingrese numero de tarifa: ";
        cin >> numeroTarifa;

        cout << "Ingrese kilometros recorridos: ";
        cin >> kilometrosRecorridos;

        /// PROCESAMIENTO DE REGISTROS

        /// PTO A
        recParcial = vImportePorKM[numeroTarifa-1]*kilometrosRecorridos;
        vRecaudacionPorTarifa[numeroTarifa-1] += recParcial;

        /// PTO B
        vRecaudacionPorCamion[numeroCamion-1] += recParcial;

        /// PTO C
        vKilometrosPorCamion[numeroCamion-1] += kilometrosRecorridos;

        cout << "Ingrese numero camion: ";
        cin >> numeroCamion;
    }

    system("cls");

    cout << endl << endl;
    cout << "PTO A" << endl;
    cout << "Tarifa\tRecaudacion $:" << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << i+1 << "\t" << fixed << setprecision(2) << vRecaudacionPorTarifa[i] << endl;
    }

    cout << endl << endl;
    cout << "PTO B" << endl;
    cout << "Camion\tRecaudacion $:" << endl;
    for(int j = 0; j < 100; j++)
    {
        cout << j + 1 << "\t" << fixed << setprecision(2) << vRecaudacionPorCamion[j] << endl;
    }

    bool primero = false;
    int minimoCamion;
    float minimoKilmetraje;
    cout << endl << endl;
    cout << "PTO C" << endl;
    cout << "Camion\tKilometros $:" << endl;
    for(int j = 0; j < 100; j++)
    {
        if(vKilometrosPorCamion[j] > 0)
        {
            if(primero==false)
            {
                minimoKilmetraje = vKilometrosPorCamion[j];
                minimoCamion = j + 1;
                primero = true;
            }
            else
            {
                if(vKilometrosPorCamion[j] < minimoKilmetraje)
                {
                    minimoKilmetraje = vKilometrosPorCamion[j];
                    minimoCamion = j + 1;
                }
            }

        }
    }

    cout << "El camion con menor kilometraje recorrido es: " << minimoCamion << " con " << minimoKilmetraje << " kilometros" << endl;

//    cout << endl << endl;
//    cout << "INT: " << sizeof (int) << endl;
//    cout << "Max int: " << INT_MAX << endl;
//    cout << "Min int: " << INT_MIN << endl;
//
//    cout << "FLOAT: " << sizeof (float) << endl;
//    cout << "DUOBLE: " << sizeof (double) << endl;

    return 0;
}
