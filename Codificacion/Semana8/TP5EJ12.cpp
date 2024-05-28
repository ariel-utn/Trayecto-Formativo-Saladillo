#include <iostream>
using namespace std;

/**
SE DISPONE DE UNA LISTA DE 10 GRUPOS DE NúMEROS Y CADA UNO DE LOS GRUPOS ESTARá
COMPUESTO POR 5 NúMEROS. SE PIDE DETERMINAR E INFORMAR:


    A) PARA CADA UNO DE LOS 10 GRUPOS LA CANTIDAD DE NúMEROS POSITIVOS, NEGATIVOS Y
    CEROS QUE LO COMPONEN. SE INFORMAN 3 RESULTADOS PARA CADA UNO DE LOS 10
    GRUPOS.

    B) PARA CADA UNO DE LOS 10 GRUPOS EL úLTIMO NúMERO PRIMO Y EN QUé ORDEN
    APARECIó EN ESE GRUPO, SI EN UN GRUPO NO HUBIERA NúMEROS PRIMOS INFORMAR
    CON UN CARTEL ACLARATORIO. SE INFORMAN 2 RESULTADOS PARA CADA UNO DE LOS 10
    GRUPOS.

    C) INFORMAR CUáNTOS NúMEROS IMPARES HAY EN TOTAL ENTRE LOS 10 GRUPOS. SE
    INFORMA UN RESULTADO AL FINAL DE TODO, ES DECIR NO DEBE INFORMAR RESULTADOS
    GRUPO POR GRUPO.

*/

int main()
{
    int num;

    /// PTO A
    int contPos, contNeg, contCero;

    /// PTO B
    int contDiv, ultPrimo, cuentaNumeros, ultPrimoPos;

    /// PTO C
    int contImpar = 0;

    /// NIVEL 1 -> LOTE

    for (int i = 1; i <= 3; i++)
    {
        /// NIVEL 2 -> GRUPO

        /// PTO A
        contPos = contNeg = contCero = 0;

        /// PTO B
        cuentaNumeros = 0;
        ultPrimoPos = 0;    /// LO USO COMO VARIABLE Y BANDERA PARA SABER SI HUBO O NO UN NUMERO PRIMO

        for (int j = 1; j <= 5; j++)
        {
            cout << "Ingrese #: ";
            cin >> num;

            /// PTO B
            cuentaNumeros++;

            /// NIVEL 3 -> NUMEROS

            /// PTO A
            if(num >0){
                contPos++;
            }
            else if(num < 0){
                contNeg++;
            }
            else{
                contCero++;
            }

            /// PTO B
            contDiv = 0;
            for(int x = 1; x <= num; x++){
                if(num%x==0){
                    contDiv++;
                }
            }
            if(contDiv==2){
                ultPrimo = num;
                ultPrimoPos = cuentaNumeros;
            }

            /// PTO C
            if(num%2 != 0){
                contImpar++;
            }
        }

        cout << "-----------" << endl;

        /// NIVEL 2 -> INFO GRUPO

        /// PTO A
        cout << "PTO A)" << endl;
        cout << "Cantidad positivos: " << contPos << endl;
        cout << "Cantidad negativos: " << contNeg << endl;
        cout << "Cantidad ceros: " << contCero << endl;

        /// PTO B
        cout << "PTO B)" << endl;
        if(ultPrimoPos>0){
            cout << "Ultimo primo: " << ultPrimo << ", en la posicion: " << ultPrimoPos << endl;
        }
        else{
            cout << "No hubo primos" << endl;
        }

    }

    /// NIVEL 1 -> INFO LOTE

    /// PTO C
    cout << "PTO C)" << endl;
    cout << "Total de numeros impares: " << contImpar << endl;

    return 0;

}
