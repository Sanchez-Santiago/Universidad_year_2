/*Escriba un programa que pida dos n�meros y que conteste cu�l es el 
menor y cu�l el mayor o que escriba que son iguales.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0;
	printf("Ingrese dos numeros: \n");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
		printf("%d es mayor que %d", n1, n2);
	else
		printf("%d es menor que %d", n1, n2);
	return 0;
}

