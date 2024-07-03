Algoritmo TP07EJ11
	
FinAlgoritmo

Funcion r = sumarVector(vec, tam)
	acu = 0
	Para x<-0 Hasta tam-1 Con Paso 1 Hacer
		acu = acu + vec[x]
	FinPara
	r = acu
FinFuncion

Funcion cargarVector(v,tam)
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer v[i]
	FinPara
FinFuncion