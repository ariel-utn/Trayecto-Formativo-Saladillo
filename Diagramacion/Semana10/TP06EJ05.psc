Algoritmo TP06EJ05
	tam = 10
	///// DECLARACION DEL VECTOR
	Dimension vec[10]
	///// LEO Y CARGO EL VECTOR
	Para b<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer vec[b]
	FinPara
	// MENOR IMPAR EN EL VECTOR
	ci = 0
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Si vec[i]%2 != 0 Entonces
			ci = ci+1
			Si ci==1 Entonces
				menorImpar = vec[i]
				posImpar = i+1
			SiNo
				Si vec[i]<menorImpar Entonces
					menorImpar = vec[i]
					posImpar = i+1
				FinSi
			FinSi
		FinSi
	FinPara
	// MAYOR PAR EN EL VECTOR
	cp = 0
	Para p<-0 Hasta tam-1 Con Paso 1 Hacer
		Si vec[p]%2 == 0 Entonces
			cp = cp+1
			Si cp==1 Entonces
				mayorPar = vec[p]
				posPar = p+1
			SiNo
				Si vec[p]>mayorPar Entonces
					mayorPar = vec[p]
					posPar = p+1
				FinSi
			FinSi
		FinSi
	FinPara
	/// MUESTRO EL MENOR IMPAR Y EL MAYOR PAR
	Escribir "MENOR IMPAR: ", menorImpar, ". POSICION: ", posImpar
	Escribir "MAYOR PAR: ", mayorPar, ". POSICION: ", posPar
FinAlgoritmo
