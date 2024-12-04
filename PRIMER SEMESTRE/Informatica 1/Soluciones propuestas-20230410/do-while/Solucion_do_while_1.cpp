/*Realizar un algoritmo que solicite las edades de las personas, 
y luego obtenga la edad promedio. La cantidad de personas que se 
registran se desconoce.*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=0, cant=-1, sum=0;
	float prom=0;
	printf("Promedio de edad [Fin = 0]:\n");
	do{
		printf("Ingrese edad: ");
		scanf("%d",&edad);
		sum=sum+edad;
		cant++;
	}while(edad!=0);
	prom=(int)sum/cant;
	printf("Promedio de edad: %0.f",prom);
	return 0;
}

