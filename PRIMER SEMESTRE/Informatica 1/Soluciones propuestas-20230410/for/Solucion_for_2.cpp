/*Desarrollar un programa que permita la carga de 5 valores por 
teclado y nos muestre posteriormente la suma de los valores 
ingresados y su promedio.*/

#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0, num=0, sumador=0, prom=0;
	
	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		sumador=sumador+num;
	}

	prom=sumador/5;
	printf("\nSumatoria: %d Promedio: %d ",sumador,prom);
	return 0;
}
