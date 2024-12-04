/*Realizar un programa que muestre la tabla de multiplicar del 
1 al 10 de un numero. Ejemplo: Si ingreso 2 debera aparecer en 
pantalla los valores 2, 4, 6, hasta el 20.*/

#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0, num=0;
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	
	for(i=0;i<10;i++){
		printf("%d X %d = %d \n",(i+1),num,(i+1)*num);
	}
	return 0;
}
