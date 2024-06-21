Algoritmo TP06EJ10
	Dimension vec[20]
	Para r<-0 Hasta 19 Con Paso 1 Hacer
		Leer vec[r]
	FinPara
	cont = 0
	Para r<-1 Hasta 19 Con Paso 1 Hacer
		Si vec[r]<=vec[r-1] Entonces
			cont = cont+1
		FinSi
	FinPara
	Escribir "RUPTURAS: ", cont
FinAlgoritmo
