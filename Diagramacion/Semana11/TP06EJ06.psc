Algoritmo TP06EJ06
	Dimension vec[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vec[i]
	FinPara
	Para j<-0 Hasta 9 Con Paso 1 Hacer
		Si vec[j]%2 == 0 Entonces
			ant = ult
			posAnt = posUlt
			ult = vec[j]
			posUlt = j+1
		FinSi
	FinPara
	Escribir "Anteultimo PAR: ", ant, ". Posicion: ", posAnt
	Escribir "Ultimo PAR: ", ult, ". Posicion: ", posUlt
FinAlgoritmo
