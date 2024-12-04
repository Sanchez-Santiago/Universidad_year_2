/*Declarar una variable de cada tipo (int, float, double, char, bool), 
un puntero de cada tipo de variable creada y asignarles las direcciones de 
memoria de cada variable creada. Luego, modificar el valor de cada variable 
utilizando el puntero y mostrar por pantalla el nuevo valor de cada una 
de las variables.*/


#include <stdio.h>

int main() {
	// Declaracion e inicializacion de variables de cada tipo
	int entero = 10;
	float flotante = 2.5;
	double doble = 3.1415;
	char caracter = 'a';
	bool booleano = true;
	
	// Declaracion de punteros para cada tipo de variable
	int *ptr_entero;
	float *ptr_flotante;
	double *ptr_doble;
	char *ptr_caracter;
	bool *ptr_booleano;
	
	// Asignacion de direcciones de memoria de cada variable a su puntero correspondiente
	ptr_entero = &entero;
	ptr_flotante = &flotante;
	ptr_doble = &doble;
	ptr_caracter = &caracter;
	ptr_booleano = &booleano;
	
	// Modificacion de valor de cada variable utilizando el puntero correspondiente
	*ptr_entero = 20;
	*ptr_flotante = 5.3;
	*ptr_doble = 2.71828;
	*ptr_caracter = 'b';
	*ptr_booleano = false;
	
	// Mostrar por pantalla el nuevo valor de cada variable
	printf("Nuevo valor de entero: %d\n", entero);
	printf("Nuevo valor de flotante: %f\n", flotante);
	printf("Nuevo valor de doble: %lf\n", doble);
	printf("Nuevo valor de caracter: %c\n", caracter);
	printf("Nuevo valor de booleano: %d\n", booleano);
	
	return 0;
}
