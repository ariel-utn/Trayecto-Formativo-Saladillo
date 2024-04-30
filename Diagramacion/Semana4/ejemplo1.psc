Algoritmo ejemplo1
	/// Hacer un programa que permita el ingreso de 10 números
	/// enteros y calcule y muestre la cantidad total de
	/// números pares.
	cont = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Si num%2==0 Entonces
			cont = cont+1
		FinSi
	FinPara
	Escribir "TOTAL PARES: ", cont
FinAlgoritmo
