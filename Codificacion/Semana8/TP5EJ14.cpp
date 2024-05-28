#include <iostream>
using namespace std;

/**
DADA UNA LISTA DE NúMEROS COMPUESTA POR GRUPOS, CADA GRUPO SEPARADO DEL SIGUIENTE POR UN CERO, INGRESANDO UN NúMERO CERO CUANDO NO HAY MáS GRUPOS, SE PIDE DETERMINAR E INFORMAR:

    A) PARA CADA UNO DE LOS GRUPOS EL MáXIMO DE LOS NúMEROS NEGATIVOS Y EL MíNIMO
    DE LOS NúMEROS POSITIVOS. SE INFORMAN 2 RESULTADOS POR CADA GRUPO.

    B) PARA CADA UNO DE LOS GRUPOS EL PORCENTAJE DE NúMEROS PARES Y NúMEROS
    IMPARES. SE INFORMAN 2 RESULTADOS POR CADA GRUPO.

    C) CUáNTOS NúMEROS PRIMOS HABíA EN TOTAL ENTRE LOS GRUPOS. SE INFORMA 1
    RESULTADO AL FINAL.

*/

int main()
{
    int num;

    /// PTO A
    int contPos, contNeg, minPos, maxNeg;

    /// PTO B
    int contPar, total;
    float porcPar, porcImpar;

    /// PTO C
    int cd, contPrimos = 0;

    /// NIVEL 1 -> LOTE

    cout << "Ingrese #: ";
    cin >> num;

    while (num != 0)
    {
        /// NIVEL 2 -> GRUPO

        /// PTO A
        contPos = contNeg = 0;

        /// PTO B
        contPar = total = 0;

        while (num != 0)
        {
            /// NIVEL 3 -> PROCESO TODOS LOS NUMEROS

            /// PTO B
            total++;

            /// PTO A
            if(num > 0)
            {
                contPos++;
                if(contPos==1)
                {
                    minPos = num;
                }
                else if (num < minPos)
                {
                    minPos = num;
                }
            }
            else
            {
                contNeg++;
                if(contNeg==1)
                {
                    maxNeg = num;
                }
                else if(num > maxNeg)
                {
                    maxNeg = num;
                }
            }

            /// PTO B
            if(num%2==0)
            {
                contPar++;
            }

            /// PTO C
            cd=0;
            for(int i = 1;  i <= num; i++){
                if(num%i==0){
                    cd++;
                }
            }
            if(cd==2){
                contPrimos++;
            }

            ///
            cout << "Ingrese #: ";
            cin >> num;
        }

        cout << "---------" << endl;
        /// NIVEL 2 -> INFO GRUPO

        /// PTO A
        cout << "PTO A)" << endl;
        if(contPos>0)
        {
            cout << "Minimo positivo: " << minPos << endl;
        }
        else
        {
            cout << "Sin positivos" << endl;
        }
        if(contNeg >0)
        {
            cout << "Maximo negativo: " << maxNeg << endl;
        }
        else
        {
            cout << "Sin negativos" << endl;
        }

        /// PTO B
        cout << "PTO B)" << endl;
        porcPar = (float)(contPar*100)/total;
        porcImpar = 100 - porcPar;
        cout << "Numeros pares: " << porcPar << "%" << endl;
        cout << "Numeros impares: " << porcImpar << "%" << endl;


        ///
        cout << "Ingrese #: ";
        cin >> num;
    }

    /// NIVEL 1 - INFO LOTE
    cout << "PTO C)" << endl;
    cout << "Total de numeros primos: " <<  contPrimos << endl;


    return 0;

}
