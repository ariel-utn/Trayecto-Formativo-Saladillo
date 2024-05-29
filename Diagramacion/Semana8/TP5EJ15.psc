Algoritmo TP5EJ15
	// LOTE
	// PTO A
	cga = 0
	// PTO C
	cgpc = 0
	Para g<-1 Hasta 20 Con Paso 1 Hacer
		// GRUPO
		// PTO A
		cp = 0; cnp = 0; bandAlt = 1
		// PTO B
		total = 0; cantPrimos = 0; cantNoPrimos = 0
		// PTO C
		contCons = 0; bandPrimos = 0
		Para sg<-1 Hasta 10 Con Paso 1 Hacer
			Leer num
			// PTO B
			total = total+1
			// REGISTROS/NUMEROS
			// PTO A
			sd = 0
			Para i<-1 Hasta num-1 Con Paso 1 Hacer
				Si num%i==0 Entonces
					sd = sd + i
				FinSi
			FinPara
			Si sd==num Entonces
				cp = cp+1
				cnp = 0
			SiNo
				cnp = cnp+1
				cp = 0
			FinSi
			Si (cp==2) || (cnp==2) Entonces
				bandAlt = 0
			FinSi
			// PTO B
			cd = 0
			Para i<-1 Hasta num Con Paso 1 Hacer
				Si num%i==0 Entonces
					cd = cd+1
				FinSi
			FinPara
			Si cd==2 Entonces
				cantPrimos = cantPrimos + 1
				contCons = contCons+1
				Si contCons==4 Entonces
					bandPrimos = 1
				FinSi
			SiNo
				cantNoPrimos = cantNoPrimos + 1
				contCons = 0
			FinSi
		FinPara
		// INFO GRUPO
		// PTO A
		Si bandAlt==1 Entonces
			cga = cga+1
		FinSi
		// PTO B
		porcPrimos = (cantPrimos*100)/total
		porcNoPrimos = (cantNoPrimos*100)/total
		Escribir "PTO B) Porcentaje de numeros primos: ", porcPrimos, "%"
		Escribir "PTO B) Porcentaje de numeros no-primos: ", porcNoPrimos, "%"
		// PTO C
		Si bandPrimos==1 Entonces
			cgpc = cgpc+1
		FinSi
	FinPara
	// INFO LOTE
	Escribir "PTO A) Cantidad grupos alternados perf. no-perfc: ", cga
	Escribir "PTO C) Cantidad grupos con 2 primos consec: ", cgpc
FinAlgoritmo
