Algoritmo TP5EJ02v2
	contPrimo = 0
	contNumeros = 0
	Leer num
	Mientras num != 0 Hacer
		Si num>0 Entonces
			contNumeros = contNumeros+1
		FinSi
		cd = 0
		Para i<-1 Hasta num Con Paso 1 Hacer
			Si num%i==0 Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			contPrimo = contPrimo+1
		FinSi
		Leer num
	FinMientras
	Escribir "Primo: ", contPrimo
	Escribir "Positivos ", contNumeros
FinAlgoritmo
