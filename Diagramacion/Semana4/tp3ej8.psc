Algoritmo tp3ej8
	cantPos = 0; cantNeg = 0; cantCero = 0
	Para i<-1 Hasta 9 Con Paso 1 Hacer
		Leer n
		Si n>0 Entonces
			cantPos = cantPos+1
		SiNo
			Si n<0 Entonces
				cantNeg = cantNeg+1
			SiNo
				cantCero = cantCero+1
			FinSi
		FinSi
	FinPara
	total = cantPos+cantNeg+cantCero
	porcPos = (cantPos*100)/total
	porcNeg = (cantNeg*100)/total
	porcCero = (cantCero*100)/100
	Escribir 'Positivos: ', porcPos, "%"
	Escribir 'Negativos: ',porcNeg, "%"
	Escribir 'Ceros: ',porcCero, "%"
FinAlgoritmo
