Algoritmo TP06EJ03
	tam = 10
	// DECLARAR EL VECTOR
	Dimension vec[10]
	// LEO NUMEROS Y LO CARGO EN EL VECTOR
	Para w<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer vec[w]
	FinPara
	// BUSCO MAXIMO Y SU POSICION EN EL VECTOR
	Para t<-0 Hasta tam-1 Con Paso 1 Hacer
		Si t==0 Entonces
			max = vec[t]
			pos = t+1
		SiNo
			Si vec[t]>max Entonces
				max = vec[t]
				pos = t+1
			FinSi
		FinSi
	FinPara
	// MUESTRO EL MAXIMO Y SU POSICION
	Escribir "MAXIMO: ", max
	Escribir "POSICION: ", pos
FinAlgoritmo
