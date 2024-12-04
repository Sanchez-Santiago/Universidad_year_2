/* Ingrese un numero y determine si es par. */
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d es un numero par.",n);
	}
	return 0;
}
