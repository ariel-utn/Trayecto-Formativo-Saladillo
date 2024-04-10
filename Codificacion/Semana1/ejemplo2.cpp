#include <iostream>

using namespace std;

int main()
{
    /*
    int entero;
    entero = 5;
    float flotante;
    flotante = 5.0;
    bool booleano;
    booleano = true; /// false
    char caracter;
    caracter = '#';
    string palabra;
    palabra = "Bienvenido/a";
    */


    int entero = 500;
    float flotante = 25.0;
    bool booleano = true; /// false
    char caracter = '#';
    string palabra = "Bienvenido/a a Laboratorio 1";


    cout << "Entero: " << entero << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Booleano: " << booleano << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Palabra: " << palabra << endl;


    cout << "Entero: " << sizeof entero << " bytes" << endl;
    cout << "Flotante: " << sizeof flotante << " bytes" << endl;
    cout << "Booleano: " << sizeof booleano << " bytes" << endl;
    cout << "Caracter: " << sizeof caracter << " bytes" << endl;
    cout << "Palabra: " << sizeof palabra << " bytes" <<endl;

    return 0;
}
