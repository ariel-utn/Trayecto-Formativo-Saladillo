Algoritmo TP06EJ08
	Dimension vec[10]
	Para g<-0 Hasta 9 Con Paso 1 Hacer
		Leer num
		cv = 0
		Mientras num != 0 Hacer
			cv = cv+1
			Si cv==1 Entonces
				max = num
			SiNo
				Si num>max Entonces
					max = num
				FinSi
			FinSi
			Leer num
		FinMientras
		vec[g] = max
	FinPara
	Para j<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "Grupo #", j+1,": ",vec[j]
	FinPara
FinAlgoritmo
