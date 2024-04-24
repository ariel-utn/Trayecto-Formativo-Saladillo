Algoritmo tp2_ej05a
	Leer impOriginal
	///// PROCESOS - CALCULOS
	Si impOriginal < 100 Entonces
		impFinal = impOriginal*0.95
	SiNo
		Si (impOriginal >= 100) && (impOriginal <= 500) Entonces
			impFinal = impOriginal*0.90
		SiNo
			impFinal = impOriginal*0.85
		FinSi
	FinSi
	Escribir impFinal
FinAlgoritmo
