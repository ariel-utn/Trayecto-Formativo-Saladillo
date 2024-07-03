#include <iostream>

using namespace std;

/**
    HACER UN PROGRAMA PARA QUE SE INGRESEN 5 NUMEROS.
    LUEGO CARGARLOS EN UN VECTOR.
    OBTENER LA SUMA DE DICHOS NUMEROS.
    MOSTRAR POR PANTALLA LA SUMA.

*/

/**

TIPOS DE PARAMETROS
    --> POR VALOR
    --> POR REFERENCIA
    --> POR DIRECCION
*/

/// DECLARACION DE LA FUNCION (PROTOTIPO)

void cargarVector(int v[], int tam);
int sumarVector(int v[], int tam);
void mostrarNumero(int num);

int main()
{
    const int TAM = 2;
    int vNumeros[TAM];
    int suma;

    /// HACER UN PROGRAMA PARA QUE SE INGRESEN 5 NUMEROS. LUEGO CARGARLOS EN UN VECTOR.
    cargarVector(vNumeros, TAM);

    ///  OBTENER LA SUMA DE DICHOS NUMEROS.
    suma = sumarVector(vNumeros, TAM);

    /// MOSTRAR POR PANTALLA LA SUMA.
    mostrarNumero(suma);

    return 0;
}

/// DEFINICION DE LA FUNCION

void cargarVector(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Ingrese #: ";
        cin >> v[i];
    }
}

int sumarVector(int v[], int tam){
    int suma = 0;
    for(int j = 0; j < tam; j++){
        suma += v[j];
    }
    return suma;
}

void mostrarNumero(int num){
    cout << num << endl;
}
