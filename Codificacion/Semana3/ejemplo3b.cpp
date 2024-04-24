/**
    Hacer un programa para ingresar tres números y listar
    el máximo de ellos.
*/


#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, maximo;

    cout << "Ingrese #1: ";
    cin >> num1;

    maximo = num1;

    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > maximo){
        maximo = num2;
    }

    cout << "Ingrese #3: ";
    cin >> num3;

    if(num3 > maximo){
        maximo = num3;
    }

    cout << "El maximo es: " << maximo << endl;


    return 0;

}
