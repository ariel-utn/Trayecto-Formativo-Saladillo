Algoritmo ejemplo2
	TAM = 10
	Dimension mi_vector1[10]
	Dimension mi_vector2[10]
	///// PONER VECTOR EN CERO
	Para i<-0 Hasta TAM-1 Con Paso 1 Hacer
		mi_vector1[i] = 0
		mi_vector2[i] = i+1
	FinPara
	///// MOSTRAR VECTOR
	Para m<-0 Hasta TAM-1 Con Paso 1 Hacer
		Escribir mi_vector1[m]
	FinPara
	Escribir "-------"
	Para t<-0 Hasta TAM-1 Con Paso 1 Hacer
		Escribir mi_vector2[t]
	FinPara
FinAlgoritmo
