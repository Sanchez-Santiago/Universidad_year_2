/*Realizar un programa que permita cargar un vector de 20 numeros enteros de 
manera aleatoria, que representan la cantidad de veces que se tira una moneda 
(0=cara y 1=cruz)  Luego, contar y mostrar la cantidad de veces que salio cara 
y la cantidad de veces que salio cruz.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_numeros_aleatorios(int num[20]);
void contar_caras_y_cruces(int num[20], int* cant_cara, int* cant_cruz);

int main() {
	int num[20] = {0};
	int cant_cara = 0, cant_cruz = 0;
	
	generar_numeros_aleatorios(num);
	contar_caras_y_cruces(num, &cant_cara, &cant_cruz);
	
	// Mostrar el resultado
	printf("La cantidad de caras es %d\n", cant_cara);
	printf("La cantidad de cruces es %d\n", cant_cruz);
	
	return 0;
}

void generar_numeros_aleatorios(int num[]) {
	// Generar numeros aleatorios y almacenarlos en el arreglo
	srand(time(NULL)); // Inicializar el generador de numeros aleatorios
	for (int i = 0; i < size; i++) {
		num[i] = rand() % 2;
	}
}

void contar_caras_y_cruces(int num[], int* cant_cara, int* cant_cruz) {
	// Contar la cantidad de caras y cruces
	*cant_cara = 0;
	*cant_cruz = 0;
	for (int i = 0; i < size; i++) {
		if (num[i] == 0) {
			(*cant_cara)++;
		} else {
			(*cant_cruz)++;
		}
	}
}
