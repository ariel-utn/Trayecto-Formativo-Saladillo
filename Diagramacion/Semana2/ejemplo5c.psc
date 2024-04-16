Algoritmo ejemplo5c
	// Persona de riesgo: edad 0-3
	// Persona de riesgo: edad mayor 60
	Leer edad
	Si (edad >=0 && edad <= 3) || (edad > 60 && edad < 120) Entonces
		Escribir "Persona de riesgo"
	SiNo
		Escribir "Persona sin riesgo"
	FinSi
FinAlgoritmo
