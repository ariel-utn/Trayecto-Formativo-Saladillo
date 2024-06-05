Algoritmo TP5EJ02
	contPrimo = 0
	Para x<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		cd = 0
		Para i<-1 Hasta num Con Paso 1 Hacer
			Si num%i==0 Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			contPrimo = contPrimo+1
		FinSi
	FinPara
	Escribir contPrimo
FinAlgoritmo
