/*Realizar un programa que permita cargar un vector de 10 numeros enteros pares 
de manera aleatoria entre el 1 y el 100. Luego, mostrar la cantidad de valores 
impares que salieron pero que no se guardaron en el vector y mostrar el los 10 
valores pares que salieron.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10]={0}, i=0, cant_impar = 0, result=0;
	bool ban=false;
	
	
	printf("Cargando los valores aleatorios...\n");
	// Generar numeros aleatorios pares y almacenarlos en el arreglo
	srand(time(NULL)); // Inicializar el generador de numeros aleatorios
	for (i = 0; i < 10; i++) 
	{
		do{
			result = rand() % 100;
			if(result % 2 == 0)
			{
				num[i]=result;
				ban=true;
			}else{
				cant_impar++;
			}
		}while(ban==false);
		ban=false;
	}
	
	// Mostrar los valores pares del arreglo
	printf("\nLos valores pares del arreglo son:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	
	// Mostrar la cantidad de valores impares que no se guardaron en el arreglo
	printf("\nCantidad de impares: %d\n", cant_impar);
	
	return 0;
}

