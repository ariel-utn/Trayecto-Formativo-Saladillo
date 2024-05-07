#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar 5 números, luego informar los 2
mayores valores ingresados, aclarando cual es el máximo y cuál el que le
sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -2 el resultado será -2 y -4
Ejemplo D: 100, 20, 5, - 15, 70, el resultado será 100 y 70.
*/

int main()
{

    int j, num, max1, max2;
    int contPos = 0, contNeg = 0;

    for( j = 1; j <= 5; j++ )
    {
        cout << "Ingrese #: ";
        cin >> num;
        if(j==1)
        {
            max1 = num;
        }
        else
        {
            if( num > max1)
            {
                max2 = max1;
                max1 = num;
            }
            else{
                if( (j==2) || (num > max2) ){
                    max2 =num;
                }
            }
        }

    }
    cout << "MAX1: " << max1<< endl;
    cout << "MAX2: " << max2<< endl;



    return 0;

}
