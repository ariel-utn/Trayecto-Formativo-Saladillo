#include <iostream>
using namespace std;

/**
Una estación meteorológica registró una muestra climática de los últimos 15 días.

Por cada día registró:
- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)


Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:

A) El número del día que se haya registrado la temperatura máxima.

B) La amplitud térmica de todo el período.

C) La cantidad de días con neblina.

D) - Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
   - Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura
máxima y la temperatura mínima.

NOTA: Se considera neblina a una visibilidad menor a 2 km.*/


int main()
{

    int nroDia, i;
    float temperatura, lluvia, visibilidad;

    /// PTO A
    float maxTemperatura;
    int maxDia;

    /// PTO B
    float minTemperatura;
    float amplitudTermica;

    /// PTO C
    int contDiasNeblina = 0;

    /// PTO D
    int contDiasConLluvia = 0;
    int contDiasSinLluvia = 0;


    for(i=1; i <= 15; i++)
    {
        cout << endl;
        cout << "-----Registro #" <<i<<"-----"<< endl;

        cout << "Ingrese nro. dia: ";
        cin >> nroDia;

        cout << "Ingrese temperatura: ";
        cin >> temperatura;

        cout << "Ingrese lluvia: ";
        cin >> lluvia;

        cout << "Ingrese visibilidad: ";
        cin >> visibilidad;

        /// PTO A
        if(i==1){
            maxTemperatura = temperatura;
            maxDia = nroDia;
        }
        else{
            if(temperatura > maxTemperatura){
                maxTemperatura = temperatura;
                maxDia = nroDia;
            }
        }

        /// PTO B
        if(i==1){
            minTemperatura = temperatura;
        }
        else{
            if(temperatura < minTemperatura){
                minTemperatura = temperatura;
            }
        }

        /// PTO C
        if(visibilidad<2){
            contDiasNeblina++;
        }

        /// PTO D
        if(lluvia > 0){
            contDiasConLluvia++;
        }
        else{
            contDiasSinLluvia++;
        }

    }

    cout << endl;
    cout << "PTO A) El dia de mayor temperatura fue: " << maxDia << endl;

    cout << endl;
    amplitudTermica = maxTemperatura - minTemperatura;
    cout << "PTO B) La amplitua termica fue de: " << amplitudTermica << endl;

    cout << endl;
    cout << "PTO C) Cantidad de dias con neblina: " << contDiasNeblina << endl;

    cout << endl;
    cout << "PTO D) ";
    if(contDiasConLluvia > contDiasSinLluvia){
        cout << "Quincena lluviosa" << endl;
    }
    else if( contDiasConLluvia > 5){
        cout << "Quincena humeda" << endl;
    }
    else{
        cout << "Quincena seca" << endl;
    }














    return 0;

}
