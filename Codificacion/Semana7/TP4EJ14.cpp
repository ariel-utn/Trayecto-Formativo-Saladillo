#include <iostream>
using namespace std;

int main()
{

    int num, ant;
    int contNum = 0;
    bool bandera = true;

    cout << "Numero: ";
    cin >> num;

    while ( num != 0)
    {
        contNum++;
        if(contNum > 1){
            ///comparar numeros
            ///cout << "             ANTERIOR: " << ant << endl;
            ///cout << "             ACTUAL: " << num << endl;
            if(num < ant){
                bandera = false;
            }
        }
        ant = num;

        ///
        cout << "Numero: ";
        cin >> num;
    }

    if(bandera==true){
        cout << "Conjunto ordenado" << endl;
    }
    else{
        cout << "Conjunto No ordenado" << endl;
    }


    return 0;

}
