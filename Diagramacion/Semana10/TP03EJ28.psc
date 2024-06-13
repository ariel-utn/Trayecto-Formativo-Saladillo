Algoritmo TP03EJ28
	// E -extraccion  D-deposito
	ce = 0; cd = 0
	Para i<-1 Hasta 7 Con Paso 1 Hacer
		Leer mov,dia,tipo,imp
		Si tipo=='E' Entonces
			ce = ce+1
		SiNo
			cd = cd+1
		FinSi
		Escribir "-----"
	FinPara
	t = cd+ce
	pe = ce*100/t
	pd = cd*100/t
	Escribir "Porc. Ext.: ", pe
	Escribir "Porc. Dep.: ", pd
FinAlgoritmo
