/*Escribir una funcion que intercambie el valor de dos variables enteras 
usando punteros. La función debe tener la siguiente firma: 
void swap(int *a, int *b).*/

#include <stdio.h>


//Prototipo de la funcion

void swap(int *a, int *b);

int main() {
	
	//Declaracion e inicializacion de las variables
	int x = 10;
	int y = 20;
	
	printf("Antes del intercambio: x = %d, y = %d\n", x, y);
	//llamado de la funcion
	swap(&x, &y);
	printf("Despues del intercambio: x = %d, y = %d\n", x, y);
	
	return 0;
}


//Desarrollo de la funcion
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
