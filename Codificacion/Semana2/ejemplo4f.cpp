/// Nombre y Apellido:
/// Guia N°: 2
/// Ejercicio N°: 1
/// Enunciado:

/**Hacer un programa para ingresar por teclado un número y luego emitir
por pantalla un cartel aclaratorio indicando si el mismo es positivo,
negativo o cero. Importante: Verifique que el programa emita UN
SOLO CARTEL
*/

#include <iostream>

using namespace std;

int main(){
	
	int num1, num2 ,num3;
	
	cout << "Ingrese un numero: ";
	cin >> num1;
	
	cout << "Ingrese un numero: ";
	cin >> num2;
	
	
	cout << "Ingrese un numero: ";
	cin >> num3;
	
	/// IF ANIDADOS
	
	/// NUM1
	
	cout << "El numero " << num1 << ": ";
	if(num1 > 0){
		cout << "Es positivo" << endl;
	}
	else{
		if(num1 < 0){
			cout << "Es Negativo" << endl;
		}
		else{
			cout << "Es cero" << endl;
		}
	}

	/// NUM2
	cout << "El numero " << num2 << ": ";
	if(num2 > 0){
		cout << "Es positivo" << endl;
	}
	else{
		if(num2 < 0){
			cout << "Es Negativo" << endl;
		}
		else{
			cout << "Es cero" << endl;
		}
	}
	
	/// NUM3
	cout << "El numero " << num3 << ": ";
	if(num3 > 0){
		cout << "Es positivo" << endl;
	}
	else{
		if(num3 < 0){
			cout << "Es Negativo" << endl;
		}
		else{
			cout << "Es cero" << endl;
		}
	}

	
	return 0;
}

