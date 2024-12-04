/*Crear un arreglo de 10 numeros enteros y aleatorios. 
Luego mostrar los valores pares.*/

#include <stdio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

void llenarArreglo(int v[10]);
void mostrarPares(int v[10]);

int main() {
	int v[10] = {0};
	
	llenarArreglo(v);
	printf("Valores\n");
	for(int i=0; i<10; i++) {
		printf("%d ", v[i]);
	}
	
	mostrarPares(v);
	
	return 0;
}

void llenarArreglo(int v[10]) {
	srand(time(NULL));
	for(int i=0; i<10; i++) {
		v[i] = rand() % 100 + 1;
	}
}

void mostrarPares(int v[10]) {
	printf("\n\nValores pares \n");
	for(int i=0; i<10; i++) {
		if(v[i] % 2 == 0) {
			printf("%d ", v[i]);
		}
	}
}
