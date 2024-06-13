Algoritmo ejemplo5a
	// Hacer un programa para ingresar la edad de una persona y un numero
	// para indicar si está inmunodeprimido (1- sí, 0- no).
	// Luego mostrar si es persona de riesgo ( si la edad es mayor a 80 ó
	// está inmunodeprimido) o no es persona de riesgo.
	Leer edad, bajaDefensa
	Si edad > 80 Entonces
		Escribir "Persona de riesgo"
	SiNo
		Si bajaDefensa ==1 Entonces
			Escribir "Persona de riesgo"
		SiNo
			Escribir "No es persona de riesgo"
		FinSi
	FinSi
FinAlgoritmo
