Algoritmo tp1_ej7b
	// 7. Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje
	// de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
	// Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el
	// total a pagar ser� de $ 1.020.
	// Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el
	// total a pagar ser� de $ 800.
	Leer importeVenta,descuento
	importeFinal = importeVenta-(importeVenta*descuento)/100
	Escribir 'Importe final: ',importeFinal
FinAlgoritmo
