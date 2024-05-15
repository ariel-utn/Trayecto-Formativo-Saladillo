Algoritmo TP4EJ20
	cv = 0
	cPar = 0
	Leer num
	Mientras num != 0 Hacer
		cv = cv+1
		// Determino si es par
		Si num%2==0 Entonces
			cPar = cPar+1
			Si cPar==1 Entonces
				primerPar = num
				posPrimerPar = cv
			FinSi
		FinSi
		// Determino si es primo
		cd = 0
		Para i<-1 Hasta num Con Paso 1 Hacer
			Si num%i==0 Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			ultPrimo = num
			posUltPrimo = cv
		FinSi
		Leer num
	FinMientras
	Escribir "Primer par: ", primerPar, " en la posicion: ", posPrimerPar
	Escribir "Ultimo primo: ", ultPrimo, " en la posicion: ", posUltPrimo
FinAlgoritmo
