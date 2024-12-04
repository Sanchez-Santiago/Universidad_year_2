/*Suma días a una fechas en C.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcion para sumar dias a una fecha
struct tm sumarDias(struct tm fecha, int dias) {
	// Convertir la estructura tm en un valor de tiempo (time_t)
	time_t tiempo = mktime(&fecha);
	
	// Calcular la cantidad de segundos en los dias a sumar
	time_t segundosASumar = dias * 24 * 60 * 60;
	
	// Sumar los segundos a la fecha actual
	tiempo += segundosASumar;
	
	// Convertir el tiempo de vuelta a la estructura tm
	struct tm nuevaFecha = *localtime(&tiempo);
	
	return nuevaFecha;
}

int main() {
	// Definir una fecha como estructura tm
	struct tm fecha = {0}; // Inicializar la estructura tm con ceros
	
	// Establecer la fecha (año, mes-1, dia)
	fecha.tm_year = 2023 - 1900; // Año - 1900
	fecha.tm_mon = 0; // Enero (0-11)
	fecha.tm_mday = 1; // Primer dia del mes
	
	// Numero de dias a sumar
	int diasASumar = 5;
	
	// Llamar a la funcion para sumar dÃ­as a la fecha
	struct tm nuevaFecha = sumarDias(fecha, diasASumar);
	
	// Imprimir la nueva fecha
	printf("La nueva fecha despues de sumar %d dias es: %d-%02d-%02d\n",
		   diasASumar, nuevaFecha.tm_year + 1900, nuevaFecha.tm_mon + 1, nuevaFecha.tm_mday);
	
	return 0;
}
