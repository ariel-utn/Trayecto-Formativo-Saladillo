#include <iostream>
#include <iomanip>
using namespace std;

/**
Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:

    - Legajo del estudiante (entero)
    - Código de materia (entero)
    - Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante
mayor a 30000.


Calcular e informar:

A - La nota promedio entre todos los estudiantes.
B - El legajo del estudiante con menor nota.
C - La cantidad de exámenes rendidos para la materia 10.
D - El porcentaje de aprobados y no aprobados.


NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero
de ellos.

*/

int main()
{

    int legajo, materia;
    float nota;

    /// PTO A
    int contNotas = 0;
    float acuNotas = 0, promedio;

    /// PTO B
    float minNota = 11;
    int minLegajo;

    /// PTO C
    int contMateria10 = 0;

    /// PTO D
    int contAprobados = 0, contNoAprobados = 0, total;
    float porcAprobados, porcNoAprobados;



    cout << "Legajo: ";
    cin >> legajo;

    while (legajo <= 30000)
    {

        cout << "Materia: ";
        cin >> materia;

        cout << "Nota: ";
        cin >> nota;

        cout << "---------" << endl;
        cout << endl;

        /// NIVEL REGISTRO

        /// PTO A
        contNotas++;
        acuNotas += nota;

        /// PTO B
        if(nota < minNota){
            minNota = nota;
            minLegajo = legajo;
        }

        /// PTO C
        if(materia==10){
            contMateria10++;
        }

        /// PTO D
        if(nota >= 6){
            contAprobados++;
        }
        else{
            contNoAprobados++;
        }


        ///
        cout << "Legajo: ";
        cin >> legajo;
    }


    cout << endl;
    cout << endl;
    /// PTO A, B, C y D
    if(contNotas > 0){
    promedio = acuNotas/contNotas;
    cout << "PTO A) Promedio: " <<fixed << setprecision(2) << promedio << endl;
    cout << "PTO B) Legajo menor nota: " << minLegajo << endl;
    cout << "PTO C) Rindieron materia 10: " << contMateria10 << endl;
    total = contAprobados+contNoAprobados;
    porcAprobados = (float)(contAprobados*100)/total;
    cout << "PTO D) Porc. aprobados: " << fixed << setprecision(2) << porcAprobados << "%" << endl;
    porcNoAprobados = (float)(contNoAprobados*100)/total;
    cout << "PTO D) Porc. no aprobados: " <<  fixed << setprecision(2) << porcNoAprobados << "%" << endl;

    }
    else{
        cout << "No se ingresaron notas " << endl;
    }

    /// PTO B

    /// PTO C

    /// PTO D

    return 0;

}
