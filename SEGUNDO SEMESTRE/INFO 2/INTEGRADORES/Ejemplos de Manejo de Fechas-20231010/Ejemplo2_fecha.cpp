/*Resta de fechas en C.
Para trabajar con fechas generalmente necesitas descomponer las fechas en años, 
meses, dias, etc., y luego realizar las operaciones necesarias. 


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcion para calcular la diferencia en dÃ­as entre dos fechas
int diferenciaEntreFechas(struct tm fecha1, struct tm fecha2) {
	// Convertir las estructuras tm en valores de tiempo (time_t)
	/*utiliza mktime para convertir estas estructuras en valores de tiempo (time_t), 
	que representan la cantidad de segundos desde el 1 de enero de 1970 (Epoch).*/
	time_t tiempo1 = mktime(&fecha1);
	time_t tiempo2 = mktime(&fecha2);
	
	// Calcular la diferencia en segundos
	//difftime calcula la diferencia en segundos entre tiempo2 y tiempo1.
	double diferenciaEnSegundos = difftime(tiempo2, tiempo1);
	
	// Convertir la diferencia en segundos a dias
	/*La diferencia en segundos se convierte en dias dividiendo por el numero de 
	segundos en un di­a (24 horas * 60 minutos * 60 segundos).*/
	int diferenciaEnDias = abs((int)diferenciaEnSegundos / (24 * 60 * 60));
	
	return diferenciaEnDias;//El resultado se devuelve como un entero.
}

int main() {
	// Definir las fechas como estructuras tm
	struct tm fecha1 = {0}; // Inicializar la estructura tm con ceros
	struct tm fecha2 = {0};
	
	// Establecer las fechas (año, mes-1, di­a)
	fecha1.tm_year = 2023 - 1900; // Año - 1900
	fecha1.tm_mon = 0; // Enero (0-11)
	fecha1.tm_mday = 1; // Primer dia del mes
	
	fecha2.tm_year = 2023 - 1900; // Año - 1900
	fecha2.tm_mon = 0; // Enero (0-11)
	fecha2.tm_mday = 2; // Segundo di­a del mes
	
	// Calcular la diferencia en dias entre las dos fechas
	int diferenciaDias = diferenciaEntreFechas(fecha1, fecha2);
	
	printf("La diferencia en dias entre las dos fechas es: %d dias.\n", diferenciaDias);
	
	return 0;
}
