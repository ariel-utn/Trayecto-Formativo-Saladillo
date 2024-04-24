Algoritmo tp2_ej11_ciclo_exacto
	cpos = 0; cneg = 0; ccero = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si n>0 Entonces
			cpos = cpos+1
		SiNo
			Si n<0 Entonces
				cneg = cneg+1
			SiNo
				ccero = ccero+1
			FinSi
		FinSi
	FinPara
	Escribir "TOTAL POSITIVOS: ", cpos
	Escribir "TOTAL NEGATIVOS: ", cneg
	Escribir "TOTAL CEROS: ", ccero
FinAlgoritmo
