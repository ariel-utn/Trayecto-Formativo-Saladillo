#include <iostream>
using namespace std;

int main(){

    int num, minPos, ubiPos, maxNeg, ubiNeg;
    int contNeg = 0, contPos = 0, contNum = 0;

    cout << "Numero: ";
    cin >> num;

    while(num != 0){

    contNum++;

    if(num > 0){
        contPos++;
        if(contPos==1){
            minPos = num;
            ubiPos = contNum;
        }
        else if (num < minPos){
            minPos = num;
            ubiPos = contNum;
        }
    }
    else{
        contNeg++;
        if(contNeg==1){
            maxNeg = num;
            ubiNeg = contNum;
        }
        else if(num > maxNeg){
            maxNeg = num;
            ubiNeg = contNum;
        }
    }

    cout << "Numero: ";
    cin >> num;
    }

    if(contNeg>0){
    cout << "Maximo negativo: " << maxNeg << " en la ubicación: " << ubiNeg << endl;
    }
    else{
        cout << "No hubo numeros negativos" << endl;
    }
    if(contPos>0){
    cout << "Minimo positivo: " << minPos << " en la ubicación: " << ubiPos << endl;
    }
    else{
        cout << "No hubo numeros positivos" << endl;
    }

return 0;

}
