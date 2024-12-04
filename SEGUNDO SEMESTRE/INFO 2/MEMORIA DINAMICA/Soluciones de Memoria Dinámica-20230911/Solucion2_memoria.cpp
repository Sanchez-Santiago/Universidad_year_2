/* Cree un programa que permita reservar memoria para n valores decimales (float). 
Luego cargar los n valores, imprimirlos y liberar la memoria.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float *ptr;
	int cant=0;
	
	printf("Ingrese la cantidad de memoria ha reservar:\n");
	scanf("%d",&cant);    
	ptr=(float*)malloc(sizeof(float)*cant);
	
	printf("\nIngrese los valores: \n");
	for(int i=0;i<cant;i++){ 
		scanf("%f",ptr+i);		
	}  
	
	printf("\nValores:\n");     
	for(int i=0;i<cant;i++){
		printf("%0.2f\n",*(ptr+i));
	}
	
	free(ptr);
	return 0;
}
