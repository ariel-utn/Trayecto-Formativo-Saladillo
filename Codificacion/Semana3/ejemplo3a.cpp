/**
    Hacer un programa para ingresar tres números y listar
    el máximo de ellos.
*/


#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4, num5;
    float maximo, minimo;

    cout << "Ingrese #1: ";
    cin >> num1;

    maximo = num1;
    minimo = num1;

    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > maximo)
    {
        maximo = num2;
    }
    else{
        if (num2 < minimo){
            minimo = num2;
        }
    }

    cout << "Ingrese #3: ";
    cin >> num3;

    if(num3 > maximo)
    {
        maximo = num3;
    }
    else{
        if(num3 < minimo){
            minimo = num3;
        }
    }

    cout << "Ingrese #4: ";
    cin >> num4;

    if(num4 > maximo)
    {
        maximo = num4;
    }
    else{
        if(num4 < minimo){
            minimo = num4;
        }
    }

    cout << "Ingrese #5: ";
    cin >> num5;

    if(num5 > maximo)
    {
        maximo = num5;
    }
        else{
        if(num5 < minimo){
            minimo = num5;
        }
    }

    cout << "El maximo es: " << maximo << endl;
    cout << "El minimo es: " << minimo << endl;


    return 0;

}
