#include <iostream>
using namespace std;

int main(){

    int n1, n2, n3;

    n1 = 5;
    n2 = 7;
    n3 = 9;

    cout << "Caso 1" << endl;
    if( (n1 < 0) && (n2 < 0) || ( n3 > 0) ){
        cout << "Es verdad" << endl;
    }
    else{
        cout << "Es falso" << endl;
    }

    cout << endl;
    cout << "Caso 2" << endl;
    if( (n1 < 0) && ( (n2 < 0) || (n3 > 0) ) ) {
        cout << "Es verdad" << endl;
    }
    else{
        cout << "Es falso" << endl;
    }



return 0;

}
