/*Realice un programa que permita cargar 5 numeros enteros 
en un vector. Luego calcule el promedio de ellos. 
Finalmente mostrar todos los valores y su promedio.
*/

#include <stdio.h>

void ingresarValores(int v[5], int n);
void mostrarValores(int v[5], int n);
int sumarValores(int v[5], int n);
float calcularPromedio(int suma, int n);

int main(int argc, char *argv[]) {
	
	int v[5] = {0};
	int n = 5;
	int suma = 0;
	float promedio = 0;
	
	ingresarValores(v, n);
	mostrarValores(v, n);
	suma = sumarValores(v, n);
	promedio = calcularPromedio(suma, n);
	
	printf("\nSumatoria: %d", suma);
	printf("\nPromedio: %0.2f", promedio);
	
	return 0;
}

void ingresarValores(int v[5], int n) {
	printf("Ingrese los %d valores\n", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
}

void mostrarValores(int v[5], int n) {
	printf("\nValores\n");
	for(int i = 0; i < n; i++) {
		printf("v[%d]=%d\n", i, v[i]);
	}
}

int sumarValores(int v[5], int n) {
	int suma = 0;
	for(int i = 0; i < n; i++) {
		suma += v[i];
	}
	return suma;
}

float calcularPromedio(int suma, int n) {
	return (float)suma / n;
}
