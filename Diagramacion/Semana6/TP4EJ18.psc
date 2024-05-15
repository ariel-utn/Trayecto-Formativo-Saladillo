Algoritmo TP4EJ18
	i = 1
	contDiv = 0
	Leer num
	Mientras i <= num  Hacer
		Si num%i==0 Entonces
			contDiv = contDiv+1
		FinSi
		i = i+1
	FinMientras
	Si contDiv==2 Entonces
		Escribir "PRIMO"
	SiNo
		Escribir "NO PRIMO"
	FinSi
FinAlgoritmo
