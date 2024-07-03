#include <iostream>

using namespace std;

/**

TIPOS DE PARAMETROS
    --> POR VALOR
    --> POR REFERENCIA
*/



/// DECLARACION DE LA FUNCION (PROTOTIPO)
void funcionParametroPorValor(int valor);
void funcionParametroPorReferencia(int &referencia);


int main()
{
    int num = 22;
    cout << "Valor original: " << num << endl;

    funcionParametroPorValor(num);

    cout << "Valor despues de la funcion: " << num << endl;

    ///
    cout << endl << endl;

    num = 22;
    cout << "Valor original: " << num << endl;

    /// LLAMADA A LA FUNCION
    funcionParametroPorReferencia(num);

    cout << "Valor despues de la funcion: " << num << endl;



    return 0;
}

/// DEFINICION DE LA FUNCION
void funcionParametroPorValor(int valor)
{
    cout << "Valor recibido: " << valor << endl;
    valor = 100;
}

void funcionParametroPorReferencia(int &referencia)
{
    cout << "Valor recibido: " << referencia << endl;
    referencia = 100;
}
