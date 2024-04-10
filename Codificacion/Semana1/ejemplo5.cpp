/// Nombre:
/// TP N°: 1
/// EJ N°: 1
/// Comentarios:

/// Hacer un programa para ingresar por
/// teclado la cantidad de horas trabajadas
/// por un operario y el valor que se le
/// paga por hora trabajada y listar por
/// pantalla el sueldo que le corresponda.

#include <iostream>

using namespace std;

int main(){

    /// DECLARACION DE VARIABLES
    float sueldo;
    float valorHora;
    int cantidadHoras;

    /// INGRESO DE DATOS
    cout << "Ingrese cantidad horas: ";
    cin >> cantidadHoras;

    cout << "Ingrese valor hora: ";
    cin >> valorHora;

    /// PROCESO: OBTENER EL SUELDO
    sueldo = cantidadHoras * valorHora;

    cout << endl;
    /// SALIDA
    cout << "El sueldo es: " << sueldo;


    return 0;
}
