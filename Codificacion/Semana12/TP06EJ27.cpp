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
        vRecaudacionPorTarifa[numeroTarifa-1] += vImportePorKM[numeroTarifa-1]*kilometrosRecorridos;

        cout << "Ingrese numero camion: ";
        cin >> numeroCamion;
    }

    system("cls");

    cout << endl << endl;
    cout << "PTO A" << endl;
    cout << "Tarifa\tRecaudacion $:" << endl;
    for(int i = 0; i < 20; i++){
        cout << i+1 << "\t" << fixed << setprecision(2) << vRecaudacionPorTarifa[i] << endl;
    }
    return 0;
}
