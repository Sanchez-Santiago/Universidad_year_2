/*Utilizamos la biblioteca estÃ¡ndar <time.h>, que proporciona dos tipos de datos 
para representar fechas:

struct tm, que representa una fecha y hora especificas.
time_t, que representa una cantidad de tiempo en segundos desde el 01 de enero de 1970, 00:00:00 UTC.

structura struct tm 
Tiene los siguientes campos:
tm_year - Año, como un numero entero entre 1900 y 9999.
tm_mon - Mes, como un numero entero entre 0 (enero) y 11 (diciembre).
tm_mday - Di­a del mes, como un numero entero entre 1 y 31.
tm_hour - Hora, como un numero entero entre 0 y 23.
tm_min - Minutos, como un numero entero entre 0 y 59.
tm_sec - Segundos, como un numero entero entre 0 y 59.
tm_wday - Di­a de la semana, como un numero entero entre 0 (domingo) y 6 (sabado).
tm_yday - Dia del año, como un numero entero entre 1 y 365.
tm_isdst - Indica si el horario de verano esta activo.

Funciones de la biblioteca <time.h>

La biblioteca <time.h> proporciona una serie de funciones para manipular fechas y horas. 
Las siguientes funciones son las mas utilizadas:
time() - Devuelve la cantidad de tiempo en segundos desde el 01 de enero de 1970, 00:00:00 UTC.
localtime() - Convierte un valor time_t a una estructura struct tm.
strftime() - Convierte una estructura struct tm a una cadena de texto con un formato especificado.
gmtime() - Convierte un valor time_t a una estructura struct tm en formato UTC.

*/

#include <stdio.h>
#include <time.h>

int main() {
	time_t now = time(NULL); // Obtener la hora actual y almacenarla en la variable 'now'
	struct tm *tm = localtime(&now); // Convertir la hora actual a una estructura `struct tm`
	
	// Imprimir la fecha y hora actual en formato numerico
	printf("Fecha y hora actual: %d/%d/%d %d:%d:%d\n", // Imprimir la fecha y hora actual
		   tm->tm_year + 1900, // Año actual, se le suma 1900 porque `tm_year` almacena los aÃ±os desde 1900
		   tm->tm_mon + 1,     // Mes actual (se suma 1 porque `tm_mon` representa los meses desde 0 a 11)
		   tm->tm_mday,         // Dia del mes actual
		   tm->tm_hour,         // Hora actual (en formato de 24 horas)
		   tm->tm_min,          // Minuto actual
		   tm->tm_sec);         // Segundo actual
	
	// Convertir la hora actual a una cadena de texto en un formato especifico
	char buffer[32]; // Crear un buffer para almacenar la cadena de texto, antes de imprimir por pantalla
	strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", tm); // Formatear la estructura `tm` en el buffer segun el formato dado
	
	printf("Fecha y hora actual (formato texto): %s\n", buffer); // Imprimir la cadena de texto formateada
	
	return 0; // Indicar que el programa ha finalizado exitosamente
}
