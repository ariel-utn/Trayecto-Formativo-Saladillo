Algoritmo tp3ej24
	// PTO A
	maximo = 0
	// PTO C
	acuSueldo = 0
	// PTO D
	contSueldo = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer sueldo
		// PTO A
		Si sueldo > maximo Entonces
			maximo = sueldo
		FinSi
		// PTO B
		Si (i==1) || ( sueldo < minimo) Entonces
			minimo = sueldo
		FinSi
		// PTO C
		acuSueldo = acuSueldo + sueldo
		Si sueldo > 50000 Entonces
			contSueldo = contsueldo + 1
		FinSi
	FinPara
	Escribir "PTO A) ", maximo
	Escribir "PTO B) ", minimo
	promedio = acuSueldo/10
	Escribir "PTO C) ", promedio
	Escribir "PTO D) ", contSueldo
FinAlgoritmo
