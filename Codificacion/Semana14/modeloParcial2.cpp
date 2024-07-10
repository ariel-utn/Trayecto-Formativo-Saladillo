#include <iostream>

using namespace std;


void Punto2(bool v[]);

void Punto3(int v[], string vNombres[]);


int main()
{
    int idVenta;
    int idAutor; ///(1000-1499) ---> TENGO 500
    int idGenero; ///(1-7)    -----> TENGO 7 GENEROS
    int precio;
    int	paginas;
    int	idSucursal; /// (1-4) -----> TENGO 4 SUCURSALES


    /// PTO A
    bool vSucursales[4] {};     ///     PONER EN CERO EL VECTOR

    /// PTO B
    bool vAutor[500] {};     ///     PONER EN CERO EL VECTOR

    /// PTO C
    int vGeneros[7] {};     ///     PONER EN CERO EL VECTOR
    string vNombres[7] = {"Terror",
                          "Biografia",
                          "Novela",
                          "Ciencia ficcion",
                          "Historia",
                          "Ciencia",
                          "Salud"
                         };

    /// PTO D
    int vRecaudacion[500] {};     ///     PONER EN CERO EL VECTOR


    cout << "Ingrese Id venta: ";
    cin >> idVenta;

    while (idVenta != 0)
    {

        cout << "Ingrese Id Autor: ";
        cin >> idAutor;

        cout << "Ingrese Id Genero: ";
        cin >> idGenero;

        cout << "Ingrese precio: ";
        cin >> precio;

        cout << "Ingrese paginas: ";
        cin >> paginas;

        cout << "Ingrese Id sucursal: ";
        cin >> idSucursal;

        /// PROCESO LOS REGISTROS DE VENTA

        /// PTO A
        if(idGenero==1)
        {
            vSucursales[idSucursal-1] = true;
        }

        /// PTO B
        if(paginas>1200)
        {
            vAutor[idAutor-1000] = true;
        }

        /// PTO C
        vGeneros[idGenero-1] += precio;

        /// PTO D
        vRecaudacion[idAutor-1000] += precio;

        cout << "Ingrese Id venta: ";
        cin >> idVenta;
    }

    cout << endl << endl;
    cout << "PTO A" << endl;
    /// PTO A
    for(int i = 0; i < 4; i++)
    {
        if(vSucursales[i]==false)
        {
            cout << "La sucursal " << i + 1 << " no vendio genero de terror"<< endl;
        }
    }

    cout << endl << endl;
    cout << "PTO B" << endl;
    Punto2(vAutor);

    cout << endl << endl;
    cout << "PTO C" << endl;
    Punto3(vGeneros, vNombres);

    cout << endl << endl;
    cout << "PTO D" << endl;
    int maxRecaudacion = 0;
    int maxAutor;
    for (int i = 0; i < 500; i++){
        if(vRecaudacion[i] > maxRecaudacion){
            maxRecaudacion = vRecaudacion[i];
            maxAutor = i + 1000;
        }
    }
    cout << "El autor de mayor recaudacion: " << maxAutor << endl;

    return 0;
}


void Punto2(bool v[])
{
    int total = 0;
    for(int i = 0;  i < 500; i++)
    {
        if(v[i]==true)
        {
            total++;
        }
    }
    cout << "Total de Autores " << total << endl;
}

void Punto3(int v[], string vNombres[])
{
    for(int i = 0; i < 7; i++)
    {
        cout << vNombres[i] << "\t$: " << v[i] << endl;
    }
}
