Algoritmo tp3ej9v5
	Para x<-0 Hasta 9 Con Paso 1 Hacer
		Leer n
		Si x==0 Entonces
			max = n
			pos = x+1
		FinSi
		Si n>max Entonces
			max = n
			pos = x+1
		FinSi
	FinPara
	Escribir 'MAX:',max
	Escribir 'POS: ',pos
FinAlgoritmo
