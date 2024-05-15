Algoritmo TP4EJ19
	i = 1
	suma = 0
	Leer num
	Mientras i < num Hacer
		Si num%i==0 Entonces
			suma = suma + i
		FinSi
		i = i+1
	FinMientras
	Si num==suma Entonces
		Escribir 'Perfecto'
	SiNo
		Escribir 'No es perfecto'
	FinSi
FinAlgoritmo
