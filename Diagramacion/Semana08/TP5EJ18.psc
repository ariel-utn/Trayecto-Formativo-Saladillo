Algoritmo TP5EJ18
	// NIVEL 1 - LOTE
	// PTO B
	minPorcOS = 101
	Leer sucursal,dia,importe,tipo,pago
	// PTO D
	band = 0
	Mientras sucursal!=0 Hacer
		anterior = sucursal
		// NIVEL 2 - SUCURSAL
		// PTO A
		acu1 = 0; acu2 = 0; acu3 = 0
		// PTO B
		acuOS = 0
		// PTO C
		max1 = 0; max2 = 0; cv = 0
		Mientras sucursal==anterior Hacer
			// NIVEL 3 - REGISTROS
			// PTO D
			Si band==0 Entonces
				menorVenta = importe
				menorSucursal = sucursal
				menorDia = dia
				band = 1
			SiNo
				Si importe < menorVenta Entonces
					menorVenta = importe
					menorSucursal = sucursal
					menorDia = dia
				FinSi
			FinSi
			// PTO C
			cv = cv+1
			Si cv==1 Entonces
				max1 = importe
				max2 = importe
			SiNo
				Si importe>max1 Entonces
					max2 = max1
					max1 = importe
				SiNo
					Si (importe>max2)||(cv==2) Entonces
						max2 = importe
					FinSi
				FinSi
			FinSi
			// PTO A
			Segun pago  Hacer
				1:
					acu1 = acu1+importe
				2:
					acu2 = acu2+importe
				3:
					acu3 = acu3+importe
			FinSegun
			Si tipo==2 Entonces
				// PTO B
				acuOS = acuOS+importe
			FinSi
			Escribir '----------------------------'
			Leer sucursal,dia,importe,tipo,pago
		FinMientras
		// NIVEL 2 - SUCURSAL
		// PTO A
		total = acu1+acu2+acu3
		porc1 = (acu1*100)/total
		porc2 = (acu2*100)/total
		porc3 = (acu3*100)/total
		Escribir 'NUMERO SUCURSAL: ',anterior
		Escribir 'PTO A) Debito: ',porc1,'%'
		Escribir 'PTO A) Credito: ',porc2,'%'
		Escribir 'PTO A) Contado: ',porc3,'%'
		// PTO B
		porcOS = (acuOS*100)/total
		Si porcOS<minPorcOS Entonces
			minPorcOS = porcOS
			minSucursal = anterior
		FinSi
		// PTO C
		Escribir 'PTO C) Venta maximo 1: ',max1
		Escribir 'PTO C) Venta maximo 2: ',max2
	FinMientras
	// NIVEL 1 - LOTE
	// PTO B
	Escribir 'PTO B) Sucursal menor % OS: ',minSucursal
	// PTO D
	Escribir 'PTO D) La sucursal: ", menorSucursal," vendió $: ",menorVenta, " en el dia: ", menorDia
FinAlgoritmo
