/*Crear un programa que permita cargar un vector de 10 numeros enteros aleatorios 
entre el 5 y 20. Luego, mostrar los valores en orden inverso al ingresado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10]={0}, i=0;
	
	printf("Los valores en el orden que salieron:\n");
	// Generar numeros aleatorios y almacenarlos en el arreglo
	srand(time(NULL)); // Inicializar el generador de numeros aleatorios
	for (i = 0; i < 10; i++) {
		num[i] = rand() % 16 + 5;
		printf("%d ", num[i]);
	}
	printf("\n\n");
	
	// Mostrar los valores en orden inverso al ingresado
	printf("Los valores en orden inverso son:\n");
	for (i = 9; i >= 0; i--) {
		printf("%d ", num[i]);
	}
	printf("\n");
	
	return 0;
}


