/*Escribir un programa que declare una variable de cada tipo (int, float, 
double, char, bool), un puntero de cada tipo de la variable creada, 
inicialice la variable e inicialice el puntero para que apunte a las 
variables creadas. Luego que imprima por pantalla para cada tipo lo siguiente: 
	La direccion de memoria de la variable.
	El valor que almacena la variable.
	El valor del puntero.
	El valor al que apunta el puntero.
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	// Declaracion e inicializacion de variables de cada tipo
	int integerVar = 42;
	float floatVar = 3.1416;
	double doubleVar = 2.71828;
	char charVar = 'a';
	bool boolVar = true;
	
	// Declaracion de punteros para cada tipo de variable y asignacion de 
	// direcciones de memoria de cada variable a su puntero correspondiente
	int *intPtr = &integerVar;
	float *floatPtr = &floatVar;
	double *doublePtr = &doubleVar;
	char *charPtr = &charVar;
	bool *boolPtr = &boolVar;
	
	//Muestra resultados
	printf("Variable entera: \n");
	printf("Direccion de memoria de la variable: %p\n", &integerVar);
	printf("Valor almacenado en la variable: %d\n", integerVar);
	printf("Valor del puntero: %p\n", intPtr);
	printf("Valor al que apunta el puntero: %d\n\n", *intPtr);
	
	printf("Variable de punto flotante: \n");
	printf("Direccion de memoria de la variable: %p\n", &floatVar);
	printf("Valor almacenado en la variable: %f\n", floatVar);
	printf("Valor del puntero: %p\n", floatPtr);
	printf("Valor al que apunta el puntero: %f\n\n", *floatPtr);
	
	printf("Variable de doble precision: \n");
	printf("Direccion de memoria de la variable: %p\n", &doubleVar);
	printf("Valor almacenado en la variable: %lf\n", doubleVar);
	printf("Valor del puntero: %p\n", doublePtr);
	printf("Valor al que apunta el puntero: %lf\n\n", *doublePtr);
	
	printf("Variable caracter: \n");
	printf("Direccion de memoria de la variable: %p\n", &charVar);
	printf("Valor almacenado en la variable: %c\n", charVar);
	printf("Valor del puntero: %p\n", charPtr);
	printf("Valor al que apunta el puntero: %c\n\n", *charPtr);
	
	printf("Variable booleana: \n");
	printf("Direccion de memoria de la variable: %p\n", &boolVar);
	printf("Valor almacenado en la variable: %d\n", boolVar);
	printf("Valor del puntero: %p\n", boolPtr);
	printf("Valor al que apunta el puntero: %d\n", *boolPtr);
	
	return 0;
}
