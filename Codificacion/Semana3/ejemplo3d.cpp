/**
    Hacer un programa para ingresar tres números y listar
    el máximo de ellos.
*/


#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, maximo;

    cout << "Ingrese #1: ";
    cin >> num1;

    cout << "Ingrese #2: ";
    cin >> num2;

    cout << "Ingrese #3: ";
    cin >> num3;
    if( (num1 > num2) && (num1> num3) )
    {
        cout << "El maximo es: " << num1 << endl;
    }
    else
    {
        if( (num2 > num1)  && (num2 > num3) )
        {
            cout << "El maximo es: " << num2 << endl;
        }
        else
        {
            cout << "El maximo es: " << num3 << endl;
        }
    }
    return 0;

}

