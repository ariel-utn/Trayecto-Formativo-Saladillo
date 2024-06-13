Algoritmo tp3ej22
	contPar = 0
	Para j<-1 Hasta 7 Con Paso 1 Hacer
		Leer num
		Si num%2 == 0 Entonces
			contPar = contPar + 1
			Si contPar==1 Entonces
				par = num
				posPar = j
			FinSi
		FinSi
		cd = 0
		Para i<-1 Hasta num Con Paso 1 Hacer
			Si num%i==0 Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			primo = num
			posPrimo = j
		FinSi
	FinPara
	Escribir "PRIMER PAR: " , par, " en la UBICACION: ", posPar
	Escribir "ULTIMO PRIMO: " , primo, " en la UBICACION: ", posPrimo
FinAlgoritmo
