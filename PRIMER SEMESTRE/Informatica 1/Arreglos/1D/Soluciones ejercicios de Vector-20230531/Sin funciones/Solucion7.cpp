/*Realizar un programa que permita cargar un vector de 20 numeros enteros de 
manera aleatoria, que representan la cantidad de veces que se tira una moneda 
(0=cara y 1=cruz)  Luego, contar y mostrar la cantidad de veces que salio cara 
y la cantidad de veces que salio cruz.*/ 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[20]={0}, i=0, cant_cara = 0, cant_cruz = 0;
	
	// Generar numeros aleatorios y almacenarlos en el arreglo
	srand(time(NULL)); // Inicializar el generador de numeros aleatorios
	for (i = 0; i < 20; i++) {
		num[i] = rand() % 2;
	}
	
	// Contar la cantidad de caras y cruces
	for (i = 0; i < 20; i++) {
		if (num[i] == 0) {
			cant_cara++;
		} else {
			cant_cruz++;
		}
	}
	
	// Mostrar el resultado
	printf("La cantidad de caras es %d\n", cant_cara);
	printf("La cantidad de cruces es %d\n", cant_cruz);
	
	return 0;
}
