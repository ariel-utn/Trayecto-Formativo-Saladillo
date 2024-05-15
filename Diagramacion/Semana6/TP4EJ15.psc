Algoritmo TP4EJ15
	contNum = 0
	Leer num
	Mientras num!=0 Hacer
		contNum = contNum+1
		Si contNum==1 Entonces
			max1 = num
			max2 = num
		SiNo
			Si num>max1 Entonces
				max2 = max1
				max1 = num
			SiNo
				Si (contNum==2)||(num>max2) Entonces
					max2 = num
				FinSi
			FinSi
		FinSi
		Leer num
	FinMientras
	Escribir 'Maximo 1 es: ',max1
	Escribir 'Maximo 2 es: ',max2
FinAlgoritmo
