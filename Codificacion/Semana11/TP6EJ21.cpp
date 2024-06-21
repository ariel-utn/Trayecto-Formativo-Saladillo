#include <iostream>

using namespace std;

int main()
{
    const int ENCUESTAS = 200;
    int edad;
    /// int decada;

    /// PONER VECTOR EN CERO
    int vDecadas[10] {};

    for(int i = 0; i < ENCUESTAS; i++){
        cout << "Ingrese edad: ";
        cin >> edad;

        /// OBTENER DECADA
        /// decada = edad/10;

        /// CONTAR DECADAS
        vDecadas[edad/10]++; /// 0 AL 9
    }

    /// LIMPIAR PANTALLA
    system("cls");

    int inicio, fin;
    /// MOSTRAR CANTIDAD DE PERSONAS POR DECADAS
    for(int j = 0; j < 10; j++)
    {
    if(j == 0){
        inicio = 1;
        fin = (inicio*10)-1;
    }
    else{
        inicio = j*10;
        fin = ((j+1)*10)-1;
    }
    cout << "Decada " << j << "\t(Edad " << inicio << "-" << fin <<")"<< "\tCantidad de encuestados: " << vDecadas[j] << endl;
    }

    return 0;
}
