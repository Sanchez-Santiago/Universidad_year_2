/*Realizar un algoritmo para determinar la cantidad de numeros 
positivo y negativos que han sido ingresados.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int pos=0, neg=0, num=0;
	printf("Numeros positivos y negativos [Fin = 0]:\n");
	do{
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		if(num>0 && num!=0){
			pos++;	
		}
		if(num<0 && num!=0){
			neg++;
		}
	}while(num!=0);
	printf("Cantidades: \nPositivos: %d Negativos: %d",pos, neg);
	return 0;
}
