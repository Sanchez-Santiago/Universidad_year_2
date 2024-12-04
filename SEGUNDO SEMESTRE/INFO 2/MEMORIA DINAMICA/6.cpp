/*Crear un programa que pregunte al usuario cuantos caracteres desea introducir, 
reserve espacio para dicho número de caracteres, le permita al usuario introducirlos desde teclado. 
Por último se los muestra todos seguidos y en el orden inverso al que fueron introducidos. Crear funciones 
para cargar, mostrar en orden y mostrar en orden inverso. Utilizar funciones.
*/
#include <iostream>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	int n=0, i=0;
	printf("\n\nIngresa la cantidad de caracteres que desea ingrersar: ");
	scanf("%d", &n);

	int *valor= (int*)malloc(n*sizeof(int));

	for (int i = 0; i < n; ++i)
	{

		*(valor+i);
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
	}

	return 0;
}