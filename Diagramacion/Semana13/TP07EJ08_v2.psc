Algoritmo TP07EJ08_v2
	c = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si (esBisiesto(n))==1 Entonces
			c = c+1
		FinSi
	FinPara
	Escribir c
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
