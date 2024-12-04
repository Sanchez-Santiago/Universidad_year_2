#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	int i=0, v[10]={0}; //define el tamaño del vector.
	srand(time(NULL));
	printf("VECTOR \n");
    for(i=0;i<10;i++) //recorre el vector
    { 
		v[i]=rand()%99+1; //asigna un valor random a la posición i del vector
		printf("v[%d]=%d\n", i,v[i]);
    }
	return 0;
}

