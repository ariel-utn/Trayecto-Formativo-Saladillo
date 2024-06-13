Algoritmo ejemploVector
	//// DECLARACION VECTOR
	Dimension mi_vector[10]
	///// CARGAR UN ELEMENTO
	Leer mi_vector[0]
	Leer mi_vector[1]
	///// VER CONTENIDO VECTOR
	Escribir mi_vector[0]
	///// PONER EN CERO UN ELEMENTO
	mi_vector[5] = 0
	Escribir mi_vector[5]
	///// PONER VECTOR EN CERO
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		mi_vector[i] = 0
	FinPara
	///// MOSTRAR VECTOR
	Para m<-0 Hasta 9 Con Paso 1 Hacer
		Escribir mi_vector[m]
	FinPara
FinAlgoritmo
