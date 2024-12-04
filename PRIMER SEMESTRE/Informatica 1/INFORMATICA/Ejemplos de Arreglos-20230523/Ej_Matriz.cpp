#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	int fila=0,col=0; //define las variables auxiliares para recorrer la matriz
	int matriz[3][3]={0};//define el tamaño de la matriz
	srand(time(NULL));
    printf("MATRIZ DE 3X3 \n------------------------\n");
    //recorre la matriz.
	printf("FORMATO LISTA\n\n");
	for(fila=0;fila<3;fila++)
    {  for(col=0;col<3;col++)
       {  
          matriz[fila][col]=rand()%99+1; //asigna un valor a una posición de la matriz
          printf("matriz[%d][%d]=%d\n",fila, col, matriz[fila][col]);
       }
    }
	printf("\n------------------------\nFORMATO TABLA\n\n");
	for(fila=0;fila<3;fila++)
	{  for(col=0;col<3;col++)
		{  
			printf("%d\t",matriz[fila][col]);
		}
		printf("\n");
	}
	return 0;
}
