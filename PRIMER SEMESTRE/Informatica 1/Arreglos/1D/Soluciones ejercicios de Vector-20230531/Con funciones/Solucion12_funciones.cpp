/*Desarrollar un algoritmo que lea un arreglo A, que contiene N numeros enteros. 
Se pide construir otro arreglo ignorando los valores duplicados que se encuentran 
en A. Repetir el proceso, modificando el mismo arreglo A.*/


#include <stdio.h>

void eliminarDuplicados(int arr[], int* n);

int main() {
	int A[100];
	int N, i;
	
	printf("Ingrese la cantidad de elementos (N): ");
	scanf("%d", &N);
	
	printf("Ingrese los elementos del arreglo:\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	eliminarDuplicados(A, &N);
	
	printf("Arreglo resultante sin duplicados:\n");
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	
	return 0;
}

void eliminarDuplicados(int arr[], int* n) {
	int i, j, k;
	
	for (i = 0; i < *n; i++) {
		for (j = i + 1; j < *n; j++) {
			if (arr[i] == arr[j]) {
				// Desplazar los elementos hacia la izquierda para eliminar el duplicado
				for (k = j; k < *n - 1; k++) {
					arr[k] = arr[k + 1];
				}
				(*n)--;
				j--;
			}
		}
	}
}
