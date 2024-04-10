/// Nombre:
/// TP N°:
/// EJ N°:
/// Comentarios:

/// Hacer un programa que permita ingresar dos números enteros
/// por teclado. Luego calcular e informar la suma de ellos.

#include <iostream>

using namespace std;

int main(){

    int num1, num2, resultado;

    /// DATOS DE ENTRADA

    cout << "INGRESE EL 1ER NUMERO: ";
    cin >> num1;

    cout << "INGRESE EL 2DO NUMERO: ";
    cin >> num2;

    /// PROCESOS // CALCULOS MATEMATICOS
    resultado = num1 + num2;

    /// DATOS DE SALIDA
    cout << "LA SUMA ES: " << resultado;

    return 0;
}
