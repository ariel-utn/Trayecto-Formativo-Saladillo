Algoritmo tp2_ej09
	Leer n1, n2, n3
	max = n1
	min = n1
	Si n2 > max Entonces
		max = n2
	SiNo
		Si n2 < min Entonces
			min = n2
		FinSi
	FinSi
	Si n3 > max Entonces
		max = n3
	SiNo
		Si n3 < min Entonces
			min = n3
		FinSi
	FinSi
	Escribir max
	Escribir min
FinAlgoritmo
