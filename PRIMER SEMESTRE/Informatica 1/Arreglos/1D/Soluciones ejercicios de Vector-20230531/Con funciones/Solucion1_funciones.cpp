/*Se tiene un vector de 5 elementos con valores numericos 
enteros. Luego mostrar los valores que estan en posiciones 
impares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generarValoresAleatorios(int v[5], int n);
void imprimirValoresEnPosicionesImpares(int v[5], int n);

int main() {
	
	int v[5] = {0};
	generarValoresAleatorios(v, 5);
	printf("Lista de valores\n\n");
	for(int i = 0; i < 5; i++) {
		printf("v[%d]=%d\n", i, v[i]);
	}
	imprimirValoresEnPosicionesImpares(v, 5);
	
	return 0;
}


void generarValoresAleatorios(int v[5], int n) {
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		v[i] = rand() % 99;
	}
}

void imprimirValoresEnPosicionesImpares(int v[5], int n) {
	printf("\n\nValores en posiciones impares\n\n");
	for(int i = 1; i < n; i += 2) {
		printf("v[%d]=%d\n", i, v[i]);
	}
}
