#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

// Se define MAX como el valor maximo que puede asumir la variable tamaño en el programa.
#define MAX 10
// prototipado de las funciones

void cargarMatriz(int tamano, int matriz[MAX][MAX],char nombre);
void mostrarMatriz(int tamano, int matriz[MAX][MAX], char nombre);
void sumaMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]);
void restaMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]);
void multiplicacionMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]);
void transponeMatriz(int tamano, int matriz[MAX][MAX],char nombre);
void promediaDiagonalPrincipal(int tamano, int matriz[MAX][MAX], char nombre);

int main() {
	srand(time(NULL));
	char op=' ';
	int tamano=0, a[MAX][MAX]={0}, b[MAX][MAX]={0}, r[MAX][MAX]={0};
	printf("Ingrese el tamaño de la matriz:");
	scanf("%d",&tamano);
	while(op!='S') {
		// menu de opciones
		printf("_____________________________________________________________ ");
		printf("\nOPERACIONES CON ARREGLOS");
		printf("\n\"A\"- Suma de matrices");
		printf("\n\"B\"- Resta de Matrices");
		printf("\n\"C\"- Multiplicación de Matrices");
		printf("\n\"D\"- Transpone una Matriz");
		printf("\n\"E\"- Promedia la diagonal principal de una Matriz");
		printf("\n\"S\"- Salir");
		printf("\nSelecciona una opcion: ");
		scanf(" %c",&op);

		switch(op) {
			case 'A':
			case 'a':
				printf("\n_____________________________________________________________ ");
				printf("\nSELECCIONO LA OPCION A: SUMA");
				cargarMatriz(tamano, a, 'A'); // llama a la función cargar la matriz 'A'
				cargarMatriz(tamano, b, 'B'); // llama a la función cargar la matriz 'B'
				mostrarMatriz(tamano, a,'A'); // llama a la función mostrar la matriz 'A'
				mostrarMatriz(tamano, b,'B'); // llama a la función mostrar la matriz 'B'
				sumaMatrices(tamano, a, b, r); // llama a la función que realiza la operación seleccionada y da como resultado la matriz 'R'
				mostrarMatriz(tamano, r,'R'); // llama a la función mostrar la matriz 'R'
				break;

			case 'B':
			case 'b':
				printf("\n_____________________________________________________________ ");
				printf("\nSELECCIONO LA OPCION B: RESTA");
				cargarMatriz(tamano, a, 'A'); // llama a la función cargar la matriz 'A'
				cargarMatriz(tamano, b, 'B'); // llama a la función cargar la matriz 'B'
				mostrarMatriz(tamano, a,'A'); // llama a la función mostrar la matriz 'A'
				mostrarMatriz(tamano, b,'B'); // llama a la función mostrar la matriz 'B'
				restaMatrices(tamano, a, b, r); // llama a la función que realiza la operación seleccionada y da como resultado la matriz 'R'
				mostrarMatriz(tamano, r,'R'); // llama a la función mostrar la matriz 'R'
				break;

			case 'C':
			case 'c':
				printf("\n_____________________________________________________________ ");
				printf("\nSELECCIONO LA OPCION C: MULTIPLICACION");
				cargarMatriz(tamano, a, 'A'); // llama a la función cargar la matriz 'A'
				cargarMatriz(tamano, b, 'B'); // llama a la función cargar la matriz 'B'
				mostrarMatriz(tamano, a,'A'); // llama a la función mostrar la matriz 'A'
				mostrarMatriz(tamano, b,'B'); // llama a la función mostrar la matriz 'B'
				multiplicacionMatrices(tamano, a, b, r); // llama a la función que realiza la operación seleccionada y da como resultado la matriz 'R'
				mostrarMatriz(tamano, r,'R'); // llama a la función mostrar la matriz 'R'
				break;
			
			case 'D':
			case 'd':
				printf("\n_____________________________________________________________ ");
				printf("\nSELECCIONO LA OPCION D: TRANSPOSICION");
				cargarMatriz(tamano, a, 'A'); // llama a la función cargar la matriz 'A'
				mostrarMatriz(tamano, a,'A'); // llama a la función mostrar la matriz 'A'
				transponeMatriz(tamano, a, 'A');
				break;

			case 'E':
			case 'e':
				printf("\n_____________________________________________________________ ");
				printf("\nSELECCIONO LA OPCION E: PROMEDIA LA DIAGONAL PRINCIPAL");
				cargarMatriz(tamano, a, 'A'); // llama a la función cargar la matriz 'A'
				mostrarMatriz(tamano, a,'A'); // llama a la función mostrar la matriz 'A'
				promediaDiagonalPrincipal(tamano, a, 'A');
				break;

			case 'S':
			case 's':
				printf("\nAdiós!!! ");
				op='S';
				break;
			default:
				printf("\nLa opción seleccionada es incorrecta. ");
				break;

		}
	}
	return 0;
}

// Desarrollo de las FUNCIONES


// Función CARGAR una matriz
void cargarMatriz(int tamano, int matriz[MAX][MAX], char nombre) {
	int i=0,j=0;
	
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			matriz[i][j]=rand()%20+1;
		}
	}

}

// Función MOSTRAR una matriz
void mostrarMatriz(int tamano, int matriz[MAX][MAX], char nombre) {
	int i=0,j=0;
	printf("\nMatriz %c:\n", nombre);
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	return;
}

// Función SUMA de dos matrices. R= A + B
void sumaMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]) {
	int i=0,j=0;
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			r[i][j]=a[i][j]+b[i][j]; // suma
		}
	}

	return;
}

// Función RESTA de dos matrices. R= A - B
void restaMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]) {
	int i=0,j=0;
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			r[i][j]=a[i][j]-b[i][j]; // resta
		}
	}
	return;
}

// Función MULTIPLICACIÓN de dos matrices. R= A * B
void multiplicacionMatrices(int tamano, int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX]) {
	int i=0,j=0,k=0;
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			r[i][j]=0;
			for(k=0; k<tamano; k++) {
				r[i][j]= r[i][j]+a[i][k]*b[k][j]; // multiplica
			}
		}
	}
	return;
}

// Función TRANSPONER una matriz
void transponeMatriz(int tamano, int matriz[MAX][MAX], char nombre) {
	printf("\nMatriz transpuesta:\n");
	int i=0,j=0;
	for(i=0; i<tamano; i++) {
		for (j=0; j<tamano; j++) {
			printf("%d\t",matriz[j][i]); //Cambio de posiciones ij por ji
		}
		printf("\n");
	}
	return;
}

// Función PROMEDIA los valores de la diagonal principal de una matriz
void promediaDiagonalPrincipal(int tamano, int matriz[MAX][MAX], char nombre) {
	int i=0,j=0;
	float promedio=0, acumulador=0, contador=0;
	for(i=0; i<tamano; i++) {
		for (j=0; j<tamano; j++) {
			if (i==j) {
				acumulador+=matriz[i][j];
				contador+=1;
			}
		}
	}
	promedio=acumulador/contador;
	printf("\nEl promedio de la diagonal principal de la Matriz es: %0.2f\n",promedio);
	return;
}

