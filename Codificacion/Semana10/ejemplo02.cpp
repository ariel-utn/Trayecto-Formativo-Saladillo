#include <iostream>
using namespace std;

int main()
{

    /// LA CANTIDAD DE ELEMENTOS
    const int TAM = 10;

    /// LA DECLARACION
    int mi_vector1[5];
    int mi_vector2[TAM];

    /// PONER CERO VECTOR
    int mi_vector3[TAM] = {0};
    int mi_vector4[TAM] = {};
    int mi_vector5[TAM] {};

    /// DAR VALOR INICIAL
    ///int  mi_vector6[TAM] = {-2,10,-7,12,11,35,48,-9,85,17};
    ///int  mi_vector6[TAM] = {-2,10,-7};


    /// CARGA MANUAL DEL VECTOR
    for(int r = 0; r < TAM; r++ )
    {
        cin >> mi_vector5[r];

    }

    /// MOSTRAR CONTENIDO DEL VECTOR
    for(int i= 0; i < TAM; i++ )
    {
        cout << mi_vector5[i] << '\t';
    }







    return 0;

}
