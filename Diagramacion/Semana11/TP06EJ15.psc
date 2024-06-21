Algoritmo TP06EJ15
	Dimension vec1[5]
	Para t<-0 Hasta 4 Con Paso 1 Hacer
		Leer vec1[t]
	FinPara
	Dimension vec2[9]
	i = 0
	Para r<-0 Hasta 8 Con Paso 1 Hacer
		Si r%2==0 Entonces
			vec2[r] = vec1[i]
			i = i+1
		SiNo
			vec2[r] = (vec1[i-1]+vec1[i])/2
		FinSi
	FinPara
	Para z<-0 Hasta 8 Con Paso 1 Hacer
		Escribir vec2[z]
	FinPara
FinAlgoritmo
