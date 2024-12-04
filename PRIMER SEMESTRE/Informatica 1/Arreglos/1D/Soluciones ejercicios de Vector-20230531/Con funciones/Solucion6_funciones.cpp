/*Crear un programa que permita cargar un vector de 5 numeros enteros. Luego, 
mostrar el numero menor y el numero mayor de los valores ingresados.*/

#include <stdio.h>

void leer_numeros(int num[], int size) ;
int encontrar_maximo(int num[], int size);
int encontrar_minimo(int num[], int size) ;

int main() {
	int num[5] = {0}, max=0, min=0;
	
	leer_numeros(num, 5);
	
	max = encontrar_maximo(num, 5);
	min = encontrar_minimo(num, 5);
	
	// Mostrar el resultado
	printf("Mayor: %d\nMenor: %d\n", max, min);
	
	return 0;
}

void leer_numeros(int num[], int size) {
	// Leer los numeros y almacenarlos en el vector
	printf("Ingrese %d numeros enteros:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &num[i]);
	}
}

int encontrar_maximo(int num[], int size) {
	// Encontrar el maximo
	int max = num[0];
	for (int i = 1; i < size; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	return max;
}

int encontrar_minimo(int num[], int size) {
	// Encontrar el minimo
	int min = num[0];
	for (int i = 1; i < size; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}
	return min;
}
