/*Escriba un programa que pida dos n�meros enteros y que calcule su divisi�n, 
escribiendo si la divisi�n es exacta o no. Tener en cuenta que no se puede 
dividir por cero.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0, div=0;
	printf("Ingrese dos numeros: \n");
	scanf("%d%d",&n1,&n2);
	if(n1%n2==0 && n2!=0){
		printf("La division es exacta. %d / %d = %d\n",n1,n2,n1/n2);
	}else{
		printf("La division no es exacta.\n");
	}
	return 0;
}

