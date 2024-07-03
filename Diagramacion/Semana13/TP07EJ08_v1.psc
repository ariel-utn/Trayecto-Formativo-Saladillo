Algoritmo TP07EJ08
	tam = 3
	Dimension vAnios[tam]
	cargarAnios(vAnios,tam)
	c = contarBisiestos(vAnios,tam)
	mostrarValor(c)
FinAlgoritmo

Funcion r = esBisiesto(anio)
	Si anio%4==0 Entonces
		Si anio%100==0 Entonces
			Si anio%400==0 Entonces
				r = 1
			SiNo
				r = 0
			FinSi
		SiNo
			r = 1
		FinSi
	SiNo
		r = 0
	FinSi
FinFuncion

Funcion cargarAnios(v,tam)
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer v[i]
	FinPara
FinFuncion

Funcion r = contarBisiestos(v,tam)
	cont = 0
	Para j<-0 Hasta tam-1 Con Paso 1 Hacer
		Si esBisiesto(v[j])==1 Entonces
			cont = cont+1
		FinSi
	FinPara
	r = cont
FinFuncion

Funcion mostrarValor(num)
	Escribir num
//FinFuncion
