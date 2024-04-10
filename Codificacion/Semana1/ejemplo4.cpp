/// Nombre:
/// TP N°:
/// EJ N°:
/// Comentarios:

#include <iostream>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "");  /// USADO PARA MOSTRAS ACENTOS DE FORMA CORRECTA

    int entero = 5;
    char caracter = 'G';
    float flotante = 8.5;
    string cadena = "BUEN DÍA";

    cout << "ENTERO: " << entero << endl;
    cout << "CARACTER: " << caracter << endl;
    cout << "FLOTANTE: " << flotante << endl;
    cout << "CADENA: " << cadena << endl;

    return 0;
}
