Algoritmo TP5EJ16v2
	art1 = 0; art2 = 0; art3 = 0
	cant1 = 0; cant2 = 0; cant3 = 0
	Para i<-1 Hasta 14 Con Paso 1 Hacer
		Leer numeroArticulo,cantidadVendida, importeVenta
		Si numeroArticulo==1 Entonces
			art1 = art1+importeVenta
			cant1 = cant1+cantidadVendida
		SiNo
			Si numeroArticulo==2 Entonces
				art2 = art2+importeVenta
				cant2 = cant2+cantidadVendida
			SiNo
				art3 = art3+importeVenta
				cant3 = cant3+cantidadVendida
			FinSi
		FinSi
	FinPara
	Escribir "Art. 1 $: ", art1
	Escribir "Art. 2 $: ", art2
	Escribir "Art. 3 $: ", art3
	Si (cant1>cant2) && (cant1 >cant3) Entonces
		Escribir "Art. 1"
	SiNo
		Si cant2>cant3 Entonces
			Escribir "Art. 2"
		SiNo
			Escribir "Art. 3"
		FinSi
	FinSi
FinAlgoritmo
