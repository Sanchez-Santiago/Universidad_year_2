/* Ingrese los lados de un triangulo y determine de que triangulo se trata. 
Si tiene todos los lados diferentes es escaleno, todos los lados iguales es 
equilatero y si tiene dos lados iguales y uno desigual es isosceles.*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int l1=0, l2=0, l3=0;
	printf("Ingrese los lados de un triangulo: \n");
	scanf("%d%d%d",&l1,&l2,&l3);
	if(l1==l2 && l1==l3)
	{
		printf("Equilatero.");
	}else{
		if((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)){
			printf("Isosceles");
		}else{
			printf("Escaleno");
		}
	}
	return 0;
}
