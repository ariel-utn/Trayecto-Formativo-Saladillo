#include <iostream>

using namespace std;

/**
    FUNCIÓN:
    -------
    Puede tener un TIPO DE RETORNO: valor que devuelve (tipo de dato)
    NOMBRE
    Puede tener PARAMETROS
*/

/// DECLARACION DE LA FUNCION (PROTOTIPO)

int sumarDosNumeros(int n1, int n2);
int pedirNumero();
void mostrarNumero(int num);
void saludar();


int main(){

    int num1, num2;
    int suma;

    /// SALUDAR
    saludar();

    ///  PEDIR UN NUMERO
    num1 = pedirNumero();

    ///  PEDIR UN NUMERO
    num2 = pedirNumero();

    ///  LLAMADO A LA FUNCION
    suma = sumarDosNumeros(num1,num2);

    /// MOSTRAR SUMA
    mostrarNumero(suma);

    return 0;
}

/// DEFINICION DE LA FUNCION

int sumarDosNumeros(int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

int pedirNumero(){
    int n;
    cout << "Ingrese #: ";
    cin >> n;
    return n;
}

void mostrarNumero(int num){
    cout << num << endl;
}

void saludar(){
    cout << "Bienvenido/a" << endl;
}
