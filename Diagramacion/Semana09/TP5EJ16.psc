Algoritmo TP5EJ16
	art1 = 0; art2 = 0; art3 = 0
	cant1 = 0; cant2 = 0; cant3 = 0
	Leer numeroArticulo,cantidadVendida,importeVenta
	Mientras numeroArticulo != 0 Hacer
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
		Leer numeroArticulo,cantidadVendida,importeVenta
	FinMientras
	Escribir 'Art. 1 $: ',art1
	Escribir 'Art. 2 $: ',art2
	Escribir 'Art. 3 $: ',art3
	Si (cant1>cant2)&(cant1>cant3) Entonces
		Escribir 'Art. 1'
	SiNo
		Si cant2>cant3 Entonces
			Escribir 'Art. 2'
		SiNo
			Escribir 'Art. 3'
		FinSi
	FinSi
FinAlgoritmo
