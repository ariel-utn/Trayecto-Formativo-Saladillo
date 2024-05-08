Algoritmo tp3ej20
	///Se define a un número como primo cuando tiene solamente dos
	///divisores.
	///Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen
	/// EXACTAMENTE dos divisores: el 1 y el numero en si mismo
	///Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
	///Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
	///Hacer un programa para ingresar un número y luego informar con un
	///cartel aclaratorio si el mismo es un número primo o es número no primo.
	Leer num
	contDiv = 0
	Para i<-1 Hasta num Con Paso 1 Hacer
		Si (num%i) == 0 Entonces
			contDiv = contDiv + 1
		FinSi
	FinPara
	Si contDiv == 2 Entonces
		Escribir num, " es primo"
	SiNo
		Escribir num, " no es primo"
	FinSi
FinAlgoritmo
