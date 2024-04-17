/// Nombre y Apellido:
/// Guia N°: 1
/// Ejercicio N°: 16
/// Enunciado:

/**
 EI Laboratorio V&V hace frascos de píldoras para aprender a programar.

 Cada frasco contiene 75 píldoras y cada píldora contiene
    45 mg de Betamol,
    2 grs de Micilina y
    7 mg de Ácido Sinítico.

 Nos solicitan un programa donde se ingrese la cantidad de frascos de un
 pedido y muestre la cantidad de miligramos de Betamol, Micilina y de
 Ácido Sinítico que son necesarios para elaborarlos.

*/

#include <iostream>

using namespace std;

int main()
{
    /// DECLARO CONSTANTE A LA CANTIDAD DE CADA COMPONENTE
    const int BETAMOL = 45;   /// Betamol en mg
    const int MICILINA = 2000;/// micilina en mg
    const int SINITICO = 8;    /// sinitico en mg

    int totalBetamol, totalMicilina, totalSinitico;

    int cantidadFrascos;

    cout << "Ingrese cantidad de frascos: ";
    cin >> cantidadFrascos;

    /// CADA FRASCO CONTINE 75 PILDORAS /// CALCULO DE CANTIDADES

    totalBetamol = (BETAMOL*75)*cantidadFrascos;
    totalMicilina = (MICILINA*75)*cantidadFrascos;
    totalSinitico = (SINITICO*75)*cantidadFrascos;


    /// SALIDA POR PANTALLA

    cout << "Un frasco contiene: " << endl;
    cout << "   Betamol: " << totalBetamol << " mgs" << endl;
    cout << "   Micilina: " << totalMicilina << " mgs" << endl;
    cout << "   Sinitico: " << totalSinitico << " mgs" << endl;

    return 0;
}
