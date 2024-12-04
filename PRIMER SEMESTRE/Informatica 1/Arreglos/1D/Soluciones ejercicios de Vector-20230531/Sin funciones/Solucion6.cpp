/*Crear un programa que permita cargar un vector de 5 numeros enteros. Luego, 
mostrar el numero menor y el numero mayor de los valores ingresados.*/

#include <stdio.h>

int main() {
	int num[5]={0}, i=0, max=0, min=0;
	
	// Leer los numeros y almacenarlos en el vector
	printf("Ingrese 5 numeros enteros:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	
	// Encontrar el maximo y el minimo
	max = num[0];
	min = num[0];
	for (i = 1; i < 5; i++) 
	{
		if (num[i] > max) 
		{
			max = num[i];
		}
		if (num[i] < min) 
		{
			min = num[i];
		}
	}
	
	// Mostrar el resultado
	printf("Mayor: %d\nMenor: %d\n", max, min);
	
	return 0;
}

