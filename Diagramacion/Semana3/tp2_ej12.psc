Algoritmo tp2_ej12
	Leer n1,n2,n3
	Si n1>n2 Entonces
		max = n1
		min = n2
	SiNo
		max = n2
		min = n1
	FinSi
	Si n3 > max Entonces
		med = max
		max = n3
	SiNo
		Si n3 < min Entonces
			med = min
			min = n3
		SiNo
			med = n3
		FinSi
	FinSi
	Escribir "MAX: ", max
	Escribir "MED: ", med
	Escribir "MIN:" , min
FinAlgoritmo
