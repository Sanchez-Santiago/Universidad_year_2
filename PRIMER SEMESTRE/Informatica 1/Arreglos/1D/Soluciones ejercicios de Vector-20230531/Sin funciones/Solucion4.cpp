/*Crear un arreglo de 10 numeros enteros y aleatorios. 
Luego mostrar los valores pares.*/

#include <stdio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {
	
	int i=0, v[10]={0};
	srand(time(NULL));
	printf("Valores\n");
	for(i=0;i<10;i++){
		v[i]= rand() % 100 + 1;
		printf("%d-",v[i]);
	}
	
	printf("\n\nValores pares \n");
	for(i=0;i<10;i++){
		if(v[i]%2==0)
			printf("%d-",v[i]);
		
	}
	return 0;
}

