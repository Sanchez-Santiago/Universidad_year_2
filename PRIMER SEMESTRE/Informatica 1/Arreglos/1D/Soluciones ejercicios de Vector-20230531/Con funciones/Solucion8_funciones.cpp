/*Crear un programa que permita cargar un vector de 10 numeros enteros aleatorios 
entre el 5 y 20. Luego, mostrar los valores en orden inverso al ingresado.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_numeros_aleatorios(int num[10]);
void mostrar_numeros(int num[10]);
void mostrar_numeros_inverso(int num[10]);

int main() {
	int num[10] = {0};
	
	printf("Los valores en el orden que salieron:\n");
	generar_numeros_aleatorios(num);
	mostrar_numeros(num);
	printf("\n");
	
	printf("Los valores en orden inverso son:\n");
	mostrar_numeros_inverso(num);
	
	return 0;
}

void generar_numeros_aleatorios(int num[10]) {
	int i=0;
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		num[i] = rand() % 16 + 5;
	}
}

void mostrar_numeros(int num[10]) {
	int i=0;
	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

void mostrar_numeros_inverso(int num[10]) {
	int i=0;
	for (i =10-1; i >= 0; i--) {
		printf("%d ", num[i]);
	}
	printf("\n");
}
