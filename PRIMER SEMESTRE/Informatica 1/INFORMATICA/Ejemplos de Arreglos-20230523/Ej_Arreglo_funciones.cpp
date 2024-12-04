#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

/*Se define la directiva para el tamaño del arreglo, 
despues de la inclusion de las librerias y antes de los 
prototipados de las funciones. */
#define MAX 100 //El nombre es en mayuscula.

void mostrar(int [MAX][MAX],int);

int main() {
	int arreglo[MAX][MAX]={0},tamano=0, i=0, j=0;
	srand(time(NULL));
	printf("Ingrese el tamaño del arreglo bidimensional: ");
	scanf("%d",&tamano);
	//Se carga el arreglo con numeros enteros del 1 al 100 de manera aleatoria.
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			arreglo[i][j]=rand()%100+1;
		}
	}
	mostrar(arreglo, tamano);
	return 0;

}

//Desarrollo de la funcion
void mostrar(int arreglo[MAX][MAX],int tamano) {
	int i=0, j=0;
	printf("\nTABLA DE VALORES\n");
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			printf("%d\t",arreglo[i][j]);
		}
		printf("\n");
	}
}
