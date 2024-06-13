Algoritmo tp2_ej05b
	Leer impVenta
	Si impVenta > 500 Entonces
		desc = impVenta*0.15
	SiNo
		Si impVenta < 100 Entonces
			desc = impVenta*0.05
		SiNo
			desc = impVenta*0.10
		FinSi
	FinSi
	impFinal = impVenta - desc
	Escribir impFinal
FinAlgoritmo
