/* Cree un programa que permita reservar memoria para n valores enteros. 
Luego cargar los n valores, imprimirlos y liberar la memoria.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int *ptr;
	int cant=0;
	
	printf("Ingrese la cantidad de memoria ha reservar:\n");
	scanf("%d",&cant);    
	ptr=(int*)malloc(sizeof(int)*cant);
	
	printf("\nIngrese los valores: \n");
	for(int i=0;i<cant;i++){ 
		scanf("%d",ptr+i);		
	}  
	
	printf("\nValores:\n");     
	for(int i=0;i<cant;i++){
		printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
	return 0;
}

