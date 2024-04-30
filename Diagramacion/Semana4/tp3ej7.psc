Algoritmo tp3ej7
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
	Escribir 'Total positivos: ',cpos
	Escribir 'Total negativos: ',cneg
	Escribir 'Total ceros: ',ccero
FinAlgoritmo
