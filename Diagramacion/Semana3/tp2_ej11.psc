Algoritmo tp2_ej11
	// CONTADOR
	// 1- SE LE DA UN VALOR INICIAL
	// 2- CRECE/DECRECE DE MANERA CONSTANTE
	// 3- SIEMPRE SE USAN UNA CONDICION
	cpos = 0; cneg = 0; ccero = 0
	Leer n1
	Si n1 > 0 Entonces
		cpos = cpos + 1
	SiNo
		Si n1 < 0 Entonces
			cneg = cneg + 1
		SiNo
			ccero = ccero +1
		FinSi
	FinSi
	Leer n1
	Si n1 > 0 Entonces
		cpos = cpos + 1
	SiNo
		Si n1 < 0 Entonces
			cneg = cneg + 1
		SiNo
			ccero = ccero +1
		FinSi
	FinSi
	Leer n1
	Si n1 > 0 Entonces
		cpos = cpos + 1
	SiNo
		Si n1 < 0 Entonces
			cneg = cneg + 1
		SiNo
			ccero = ccero +1
		FinSi
	FinSi
	Leer n1
	Si n1 > 0 Entonces
		cpos = cpos + 1
	SiNo
		Si n1 < 0 Entonces
			cneg = cneg + 1
		SiNo
			ccero = ccero +1
		FinSi
	FinSi
	Escribir "TOTAL POSITIVOS: ", cpos
	Escribir "TOTAL NEGATIVOS: ",cneg
	Escribir "TOTAL CEROS: ", 	ccero
FinAlgoritmo
