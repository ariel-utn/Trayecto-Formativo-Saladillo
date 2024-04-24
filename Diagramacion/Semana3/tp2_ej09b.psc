Algoritmo tp2_ej09b
	Leer n1,n2,n3
	Si n1>n2 Entonces
		max = n1
		min = n2
	SiNo
		max = n2
		min = n1
	FinSi
	Si n3>max Entonces
		max = n3
	SiNo
		Si n3<min Entonces
			min = n3
		FinSi
	FinSi
	Escribir max
	Escribir min
FinAlgoritmo
