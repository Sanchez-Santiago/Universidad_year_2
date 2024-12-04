/*Ingrese un numero y diga a que di­a de la semana corresponde (la semana 
empieza el domingo).*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int dia=0;
	printf("Ingrese un numero del 1-7: ");
	scanf("%d", &dia);
	switch(dia){
		case 1: printf("Domingo");
			break;
		case 2: printf("Lunes");
			break;
		case 3: printf("Martes");
			break;
		case 4: printf("Miercoles");
			break;
		case 5: printf("Jueves");
			break;
		case 6: printf("Viernes");
			break;
		case 7: printf("Sabado");
			break;
	}
	return 0;
}


